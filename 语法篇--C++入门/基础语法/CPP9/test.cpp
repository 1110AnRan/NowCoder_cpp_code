#define _CRT_SECURE_NO_WARNINGS 1
//�ж����״̬
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
        cout << "ƫ��" << endl;
    }
    else if (BMI >= 18.5 && BMI < 20.9)
    {
        cout << "����" << endl;
    }
    else if (BMI >= 20.9 && BMI <= 24.9)
    {
        cout << "����" << endl;
    }
    else if (BMI > 24.9)
    {
        cout << "ƫ��" << endl;
    }


    return 0;
}