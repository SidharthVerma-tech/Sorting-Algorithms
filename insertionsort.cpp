#include <iostream>
using namespace std;
void insertionSort(int arr[],int start,int end){
    for(int i=0;i<end-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }
}
int main(){
        int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        insertionSort(arr,0,n);
        for(int i=0;i<n;i++) cout << arr[i] << " ";
    }
}