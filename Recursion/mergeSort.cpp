#include <bits/stdc++.h>
using namespace std;
//jaise hi divide hua ab sbko merge kro compare krte hue(imp)
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp; //ek temp vector lelo jisme 
    int left = low;
    int right = mid + 1;

    // merging kro jb tk dono side size same ho 
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // agr left ki array bach jaye to directly add krdo
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // agr right ki array bach jaye to directly add krdo
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    //jb saare ho jaaye to wapis original array me dal do
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

//sabse pehle ye function call hua
void mergeSort(vector<int>& arr, int low, int high) { 
    if (low >= high) return;  //base case

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid); //first half ke liye 
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n;   // vector ka size  input krne ke liye

    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // custom input le lenge isse
    }

    mergeSort(arr, 0, n - 1);

    //jo value return aai hai usko print kr diya 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}