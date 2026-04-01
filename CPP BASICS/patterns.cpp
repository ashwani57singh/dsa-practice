#include <bits/stdc++.h>
using namespace std;

// <1>first pattern

// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// <2> second pattern
// void print2(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// <3>
// void print3(int n)
// {
// for(int i=1;i<n+1;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// }

// <4>
// void print4(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

//<5>

//  void print5(int n)
// {
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
//  or

//         for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;

//     }
// }

//<6>

// void print6(int n)
// {
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

//      or

// for(int i=0; i<n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<j<<" ";
//         }
//         cout<< endl;
//     }
// }

// <7>

// void print7(int n){
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-1-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++)
//         {
//             cout<<"*";
//         }
//         for(int j=0;j<n-1-i;j++)
//         {
//             cout<<" ";
//         }
//         cout<< endl;
//     }
// }

// <8>

//  void print8(int n){
//    for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<2*n-2*i-1;j++)
//     {
//         cout<< "*";
//     }
//     for(int j=0; j<i;j++)
//     {
//         cout<<" ";
//     }
// cout<<endl;
//    }
// }

// <9>

// void print9(int n){
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<n-i-1;j++)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<2*i+1;j++)
//     {
//         cout<<"*";
//     }
//     for(int j=0;j<n-i-1;j++)
//     {
//         cout<<" ";
//     }
//     cout<<endl;
// }
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i;j++)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<2*n-2*i-1;j++)
//     {
//         cout<<"*";
//     }
//     for(int j=0;j<i;j++)
//     {
//         cout<<" ";
//     }
//     cout<<endl;
// }
// }

// <new>

// void printNew(int n){
//     for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n-i-1;j++)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<2*i+1;j++)
//     {
//         cout<<"*";
//     }
//     for(int j=0;j<n-i-1;j++)
//     {
//         cout<<" ";
//     }
//     cout<<endl;
// }
// for(int i=0;i<n-1;i++)
// {
//     for(int j=0;j<=i;j++)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<7-2*i;j++)
//     {
//         cout<<"*";
//     }
//     for(int j=0;j<=i;j++)
//     {
//         cout<<" ";
//     }
//     cout<<endl;
// }
// }

// <10>

// void print10(int n){
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<(n-1)-i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// <11>

// void print11(int n){
// int start=1;
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++)
//     {
//         cout<<start;
//         start=1-start;
//     }
//     cout<<endl;
// }
// }

// <12>

//  void print12(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=1;j<=2*(n-i);j++){
//             cout<<" ";
//         }
//        for(int j=i;j>=1;j--){
//         cout<< j;
//        }
//         cout<<endl;
//     }
//  }

//  <13>

// void print13(int n)
// {
//     int num=1;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1; j<=i;j++){
//         cout<<num<<" ";
//         num= num+1;
//     }
//     cout<<endl;
// }
// }

// <14>

// void print14(int n){
// for (int i=0;i<n;i++){
//     for(char ch='A';ch<='A'+i;ch++){
//         cout<<ch;
//     }
//     cout <<endl;
// }
// }

// <15>

// void print15(int n){
// for(int i=0;i<n;i++){
//     for(char ch='A'; ch<='A'+n-i-1;ch++){
//         cout<<ch;
//     }
//     cout<<endl;
// }
// }

//<16>

// void print16(int n){
// char alpha= 'A';
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<alpha;
//     }
//     alpha=alpha+1;
//     cout<<endl;
// }
// }

// <17>

// void print17(int n)
// {
//     char alpha = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (char ch = 'A'; ch <= alpha; ch++)
//         {
//             cout << ch;
//         }

//         if (i >= 1)
//         {
//           for(char ch='A'+i-1; ch>='A'; ch--)
//             {
//                 cout << ch;
//             }
//         }

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         alpha = alpha + 1;
//         cout << endl;
//     }
// }

// <18>


void print18(int n)
{
    char alpha='A'+n-1;
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch>='A'+i;ch++)
        {
            cout<< alpha;
        }
    }
}

int main()
{

    //     test case example
    // int t;
    // cin>>t;
    // for(int i=0;i<t;i++){
    //     int n ;
    //     cin>>n;
    //     print1(n);
    // }
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    // print8(n);
    // print9(n);
    // printNew(n);
    // print10(n);
    // print11(n);
    // print12(n);
    // print13(n);
    // print14(n);
    // print15(n);
    // print16(n);
// print17(n);
print18(n);
    return 0;
}