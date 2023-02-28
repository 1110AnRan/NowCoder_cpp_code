#define _CRT_SECURE_NO_WARNINGS 1
//输出水仙花数
#include <iostream>
using namespace std;

int main() {

    // write your code here......
    int i = 0;
    int j = 0;
    int n = 0;
    for (i = 100; i < 1000; i++)
    {
        n = 0;
        j = i;
        while (j)
        {
            n += ((j % 10) * (j % 10) * (j % 10));
            j = j / 10;
        }
        if (n == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}