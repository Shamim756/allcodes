#include<bits/stdc++.h>
using namespace std;


void countSort(vector<int>& arr, int exp){
    int n=arr.size();
    vector<int> count(10,0);
    for(int i=0;i<n;i++){
        count[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    vector<int> output(n);
    for(int i=n-1;i>=0;i--){
        output[--count[(arr[i]/exp)%10]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
 }
}


void radixSort(vector<int>& arr){
    int max=*max_element(arr.begin(),arr.end());
    for(int exp=1;max/exp>0;exp*=10){
        countSort(arr,exp);
    }
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    radixSort(arr);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



//TC: O(d*(n+b)) where d is number of digits and b is base (here b=10)
//SC: O(n+b)