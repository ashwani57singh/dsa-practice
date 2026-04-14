#include<bits/stdc++.h>
using namespace std;
//using single pointer i

// void rev(int i,int arr[],int n)
// {
//     if(i>=n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     rev(i+1,arr,n);
// }

//using two pointer l and r
void rev(int l,int r,int arr[],int n)
{
    if(l>=r) return;
    swap(arr[r],arr[l]);
    rev(l+1,r-1,arr,n);
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    // rev(0,arr,n);

    rev(0,n-1,arr,n);
    
    for(int i=0;i<n;i++) cout<<arr[i]<< " ";
}