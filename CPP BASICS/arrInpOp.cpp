#include <bits/stdc++.h>
using namespace std;
void doSomething(int arr[],int n){
    arr[0]+=5;
    cout<< "value in function: "<< arr[0]<<endl;
}
int main() {
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
    
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }

    doSomething(arr,n);
cout<<"value outside function : " << arr[0];
    return 0; 
}
