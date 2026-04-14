#include<bits/stdc++.h>
using namespace std;
//checking palindrome 

bool f(int i,string &s,int n)
{
    if(i>=n/2) return true ;
    if(s[i]!=s[n-i-1]) return false;
    return f(i+1,s,n);
    
}
int main()
{
    string s="madam";
    int n=s.size();
    cout<<f(0,s,n);
return 0;
}