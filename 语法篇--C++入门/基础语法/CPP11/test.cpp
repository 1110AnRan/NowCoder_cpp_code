#define _CRT_SECURE_NO_WARNINGS 1
//�жϼ���
#include <iostream>
using namespace std;

int main() {

    int month;
    cin >> month;

    // write your code here......
    if (month >= 3 && month <= 5)
    {
        cout << "����" << endl;
    }
    else if (month >= 6 && month <= 8)
    {
        cout << "�ļ�" << endl;
    }
    else if (month >= 9 && month <= 11)
    {
        cout << "�＾" << endl;
    }
    else if (month == 12 || month == 1 || month == 2)
    {
        cout << "����" << endl;
    }
    else {
        cout << "���Ϸ�" << endl;
    }


    return 0;
}