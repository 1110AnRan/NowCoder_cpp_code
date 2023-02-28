#define _CRT_SECURE_NO_WARNINGS 1
//计算小球走过的路程和反弹高度
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // 下落的高度和落地的次数
    double h;
    int n;

    cin >> h;
    cin >> n;

    // write your code here......
    if (n == 1)
    {
        cout << fixed << setprecision(1) << h << " " << h / 2;
    }
    else if (n == 2)
    {
        cout << fixed << setprecision(1) << 2 * h << " " << h / 4;
    }
    else
    {
        double TotalHigh = 2.0 * h;
        double NewH = 0;
        double Newh = h / 8;
        n = n - 2;
        while (n)
        {
            TotalHigh += h / 2;
            NewH = Newh;
            Newh = Newh / 2;
            h = h / 2;
            n--;
        }
        cout << fixed << setprecision(1) << TotalHigh << " " << NewH << endl;
    }
    return 0;
}