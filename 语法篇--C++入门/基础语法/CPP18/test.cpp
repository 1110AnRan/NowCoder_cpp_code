#define _CRT_SECURE_NO_WARNINGS 1
//�ж�һ�����ǲ�������
#include <iostream>
using namespace std;

int main() {

    // write your code here......
    int n = 0;
    cin >> n;
    if (n == 2)
    {
        cout << "������" << endl;
        return 0;
    }
    int i = 0;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i >= n / 2)
    {
        cout << "������" << endl;
    }
    else
    {
        cout << "��������" << endl;
    }

    return 0;
}