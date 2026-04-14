#include <bits/stdc++.h>
using namespace std;
//parameterized way
void f(int i,int sum )
{
    if(i<1) 
    {
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
}
int main()
{
    int n;
    cin>>n;
    f(n,0);
}
