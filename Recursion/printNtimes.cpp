// #include <bits/stdc++.h>
// using namespace std;
// int cnt = 0;
// void printName(int m)
// {
//     if (cnt == m)
//         return;
//     cout << "ash" << " ";
//     cnt++;
//     printName(m);
// }
// int main()
// {
//     //basic program
//     int n;
//     cin>>n;
//     printName(n);
// }

#include <bits/stdc++.h>
using namespace std;
void printName(int i ,int n)
{
    if (i>n)
        return;
    cout << "ash" << " ";
    // i++;
    // printName(i,n);
    printName(i+1,n);
}
int main()
{
    //basic program
    int n;
    cin>>n;
    printName(1,n);
}

