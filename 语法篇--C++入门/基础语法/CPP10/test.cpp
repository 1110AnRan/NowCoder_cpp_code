#define _CRT_SECURE_NO_WARNINGS 1
//�жϳɼ��ȼ�
#include <iostream>
using namespace std;

int main() {

    int score;
    cin >> score;

    // write your code here......
    if (score < 0 || score>100)
    {
        cout << "�ɼ����Ϸ�" << endl;
    }
    else if (score >= 90 && score <= 100)
    {
        cout << "����" << endl;
    }
    else if (score >= 80 && score < 90)
    {
        cout << "��" << endl;
    }
    else if (score >= 70 && score < 80)
    {
        cout << "��" << endl;
    }
    else if (score >= 60 && score < 70)
    {
        cout << "����" << endl;
    }
    else if (score >= 0 && score < 60)
    {
        cout << "��" << endl;
    }


    return 0;
}