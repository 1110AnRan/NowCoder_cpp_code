#define _CRT_SECURE_NO_WARNINGS 1
//规律数列求和
#include <iostream>
using namespace std;

int main() {

    // write your code here......
    long long sum = 0;
    long long temp = 9;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + temp;
        temp = temp * 10 + 9;
    }
    cout << sum;

    return 0;
}