#include<bits/stdc++.h>
using namespace std;

bool SumOfSub(int ind,vector<int> &ds,int s,int sum,int arr[],int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            return true;  ////pehla subsequence print krte hi return true krdo jisse ki aage recursion jaaye hi naa

          
        }
        return  false;
        
    }
    ds.push_back(arr[ind]);
    s=s+arr[ind];
    if(SumOfSub(ind+1,ds,s,sum,arr,n)==true)  return true; //agr answer isme hi mil jaaye to "not take" wale me jaye hi naa
    ds.pop_back();
    s=s-arr[ind];
    if(SumOfSub(ind+1,ds,s,sum,arr,n)==true) return true;//agr take me answer nhi mila to isme check krenge (i.e not take me)

    return false; //dono me answer nhi mile to sidha false return krdo ki nhi mila


}

int main()
{
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> ds;
    SumOfSub(0,ds,0,sum,arr,n);

return 0;
}