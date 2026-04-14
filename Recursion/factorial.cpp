#include<bits/stdc++.h>>
using namespace std;

//factorial of any number n

int fact(int n)
{
    if(n==1) return 1;
    return n*fact(n-1);
}
int main ()
{
    int n;
    cin>>n;
    cout<<fact(n);
}