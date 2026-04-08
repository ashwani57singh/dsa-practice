#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void printName()
{
    if (cnt == 5)
        return;
    cout << "ash" << " ";
    cnt++;
    printName();
}
int main()
{
    printName();
}
