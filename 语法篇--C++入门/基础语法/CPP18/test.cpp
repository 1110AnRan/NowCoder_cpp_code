#define _CRT_SECURE_NO_WARNINGS 1
//判断一个数是不是质数
#include <iostream>
using namespace std;

int main() {

    // write your code here......
    int n = 0;
    cin >> n;
    if (n == 2)
    {
        cout << "是质数" << endl;
        return 0;
    }
    int i = 0;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i >= n / 2)
    {
        cout << "是质数" << endl;
    }
    else
    {
        cout << "不是质数" << endl;
    }

    return 0;
}