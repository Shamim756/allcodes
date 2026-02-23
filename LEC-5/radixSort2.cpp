#include<bits/stdc++.h>
using namespace std;
void radixSort(int arr[], int n, int exp) {
    int br[n];

    for(int i=0;i<n;i++){
        br[i]=arr[i]/exp%10;
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(br[j]>br[j+1]){
                swap(arr[j], arr[j+1]);
                swap(br[j], br[j+1]);
            }
        }
    }

    int ma=*max_element(arr,arr+n);

    while(ma/exp>0){
        exp=exp*10;
        radixSort(arr,n,exp);
    }
}



    int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int exp=1;
   
    cout<<"Sorted array: ";
     radixSort(arr,n,exp);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
    }




//TC: O(d*(n^2)) where d is number of digits
//SC: O(n)