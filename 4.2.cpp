#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//自建头文件要用“”包括
using namespace std;
void swap(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}
int main() {
    double shuzi[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> shuzi[i];
    }
    swap(shuzi, 10);
    for (int j = 0; j < 10; j++)
    {
        cout << shuzi[j] << endl;
    }


    system("pause");
    return 0;
}