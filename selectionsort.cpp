#include <iostream>
using namespace std;
void selectionSort(int arr[],int start,int end){
    for(int i=0;i<end-1;i++){
        int minIndex=i;
        for(int j=i+1;j<end;j++){
            if(arr[j]<arr[minIndex]) minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
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
        selectionSort(arr,0,n);
        for(int i=0;i<5;i++) cout << arr[i] << " ";
    }
    return 0;
    
}