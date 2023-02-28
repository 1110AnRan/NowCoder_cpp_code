#define _CRT_SECURE_NO_WARNINGS 1
//¥Ú”°≥À∑®±Ì
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    // write your code here......
    int i = 0;
    int j = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " * " << i << " = " << i * j << "    ";
        }
        cout << endl;
    }

    return 0;
}