#define _CRT_SECURE_NO_WARNINGS 1
//����һ�����Ľ׳�
#include <iostream>
#include <sys/types.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    long long factorial = 1;

    // write your code here......
    while (n)
    {
        factorial *= n;
        n--;
    }

    cout << factorial << endl;

    return 0;
}