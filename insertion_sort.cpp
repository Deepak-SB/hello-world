#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
void Sort(int arr[],int n){
    int min_index;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++)
        if(arr[j]<arr[min_index])
        min_index=j;
        swap(&arr[min_index],&arr[i]);
    }
}
void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    cout<<"enter the number of elements"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Sort(arr,n);
    PrintArr(arr,n);
    return 0;
}