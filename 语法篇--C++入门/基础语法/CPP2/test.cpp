//实现四舍五入
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main() {
    float a;
    cin >> a;
    if (a > 0)
        cout << (int)(a + 0.5) << endl;
    else
        cout << (int)(a - 0.5) << endl;
}