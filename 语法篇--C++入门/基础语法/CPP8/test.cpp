#define _CRT_SECURE_NO_WARNINGS 1
//计算商品打折结算金额
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double price;
    cin >> price;

    double cost = 0.0;

    // write your code here.......
    if (price >= 100 & price < 500)
    {
        cost = price * 0.9;
    }
    else if (price >= 500 && price < 2000)
    {
        cost = price * 0.8;
    }
    else if (price >= 2000 && price < 5000)
    {
        cost = price * 0.7;
    }
    else
    {
        cost = price * 0.6;
    }

    cout << setiosflags(ios::fixed) << setprecision(1) << cost << endl;

    return 0;
}