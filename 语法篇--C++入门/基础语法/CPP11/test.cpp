#define _CRT_SECURE_NO_WARNINGS 1
//ÅÐ¶Ï¼¾½Ú
#include <iostream>
using namespace std;

int main() {

    int month;
    cin >> month;

    // write your code here......
    if (month >= 3 && month <= 5)
    {
        cout << "´º¼¾" << endl;
    }
    else if (month >= 6 && month <= 8)
    {
        cout << "ÏÄ¼¾" << endl;
    }
    else if (month >= 9 && month <= 11)
    {
        cout << "Çï¼¾" << endl;
    }
    else if (month == 12 || month == 1 || month == 2)
    {
        cout << "¶¬¼¾" << endl;
    }
    else {
        cout << "²»ºÏ·¨" << endl;
    }


    return 0;
}