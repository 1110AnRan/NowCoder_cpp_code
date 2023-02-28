#define _CRT_SECURE_NO_WARNINGS 1
//判断成绩等级
#include <iostream>
using namespace std;

int main() {

    int score;
    cin >> score;

    // write your code here......
    if (score < 0 || score>100)
    {
        cout << "成绩不合法" << endl;
    }
    else if (score >= 90 && score <= 100)
    {
        cout << "优秀" << endl;
    }
    else if (score >= 80 && score < 90)
    {
        cout << "良" << endl;
    }
    else if (score >= 70 && score < 80)
    {
        cout << "中" << endl;
    }
    else if (score >= 60 && score < 70)
    {
        cout << "及格" << endl;
    }
    else if (score >= 0 && score < 60)
    {
        cout << "差" << endl;
    }


    return 0;
}