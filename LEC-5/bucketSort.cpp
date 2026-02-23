#include<bits/stdc++.h>
using namespace std;

void bucketSort(vector<float>& arr,int n){
    vector<vector<float>>buckets(n);
    for(int i=0;i<n;i++){
        int idx=n*arr[i];
        buckets[idx].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        sort(buckets[i].begin(),buckets[i].end());
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<buckets[i].size();j++){
            arr[k++]=buckets[i][j];
        }
    }
}


int main(){
    int n;
    cin>>n;
  vector<float> arr(n);
  for(int i=0;i<n;i++)
 {
    cin>>arr[i];
  }
  bucketSort(arr,n);
  cout<<"Sorted array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";  
 }
} 



//TC: O(n + k) on average, O(n^2) in worst case where k is number of buckets
//SC: O(n + k)