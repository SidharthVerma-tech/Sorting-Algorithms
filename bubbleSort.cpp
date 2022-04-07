#include <iostream>
using namespace std;
void bubbleSort(int arr[],int start,int end){
    for(int i=0;i<end-1;i++){
        for(int j=0;j<end-1-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
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
        bubbleSort(arr,0,n);
        for(int i=0;i<n;i++) cout << arr[i] << " ";
    }
    
}