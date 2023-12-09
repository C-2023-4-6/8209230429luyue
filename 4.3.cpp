#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//自建头文件要用“”包括
using namespace std;
int main() {
    int L[100];
    for (int m = 0; m < 100; m++)
    {
        L[m] = { false };
    }
    for (int s = 1; s <= 100; s++)
    {
        for (int l = s - 1; l < 100; l += s)
        {
            L[l] = !L[l];
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (L[i])
        {
            cout << i + 1 << endl;;
        }
    }
    system("pause");
    return 0;
}
