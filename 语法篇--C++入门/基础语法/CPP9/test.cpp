#define _CRT_SECURE_NO_WARNINGS 1
//ÅÐ¶ÏÉí²Ä×´Ì¬
#include <iostream>
using namespace std;

int main() {

    double weight;
    double height;

    cin >> weight;
    cin >> height;

    // write your code here......
    double BMI = weight / height / height;
    if (BMI < 18.5)
    {
        cout << "Æ«ÊÝ" << endl;
    }
    else if (BMI >= 18.5 && BMI < 20.9)
    {
        cout << "ÃçÌõ" << endl;
    }
    else if (BMI >= 20.9 && BMI <= 24.9)
    {
        cout << "ÊÊÖÐ" << endl;
    }
    else if (BMI > 24.9)
    {
        cout << "Æ«ÅÖ" << endl;
    }


    return 0;
}