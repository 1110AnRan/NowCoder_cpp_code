#define _CRT_SECURE_NO_WARNINGS 1
//获取三个数中的最大值(三目运算符表示)
#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    // write your code here......
    cout << (a > b ? (a > c ? a : c) : (b > c ? b : c)) << endl;

    return 0;
}
