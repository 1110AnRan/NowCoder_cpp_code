#define _CRT_SECURE_NO_WARNINGS 1
//ºÚµ•‘ÀÀ„
#include <iostream>
using namespace std;

int main() {

    // write your code here......
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << a + b << " " << a - b << " " << a * b << " " << a / b << " " << a % b << endl;
    }
    else {
        cout << a + b << " " << b - a << " " << a * b << " " << b / a << " " << b % a << endl;
    }

    return 0;
}