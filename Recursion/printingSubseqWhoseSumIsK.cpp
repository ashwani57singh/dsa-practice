#include<bits/stdc++.h>
using namespace std;
void sumOfSub(int ind,vector<int> &ds ,int sum,int arr[],int n)
{
    if(ind==n)
    {
        if(sum==2){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    sum=sum+arr[ind];
    sumOfSub(ind+1,ds,sum,arr,n);
    ds.pop_back();
    sum=sum-arr[ind];
    sumOfSub(ind+1,ds,sum,arr,n);
}
int main()
{
    int arr[]={1,2,1};
    int n=3;
    vector<int> ds;
    sumOfSub(0,ds,0,arr,n);

    return 0;
}