#define _CRT_SECURE_NO_WARNINGS 1
//��1~n֮��ż���ĺ�
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int sum = 0;

    // write your code here......
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}