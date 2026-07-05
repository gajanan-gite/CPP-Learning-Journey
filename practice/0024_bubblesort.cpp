#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    bool isswap=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap){//if array is already sorted
            return;
        }
    }
}
void printarry(int arr[],int n){
    for(int i=0;i<n;i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallestindex=i; //unsorted array starting 
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[smallestindex])
            smallestindex=j;
        }
        swap(arr[i],arr[smallestindex]);
    }
}

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr; //placing the current element in its corect position
    }
}
int main(){
    int n=5;
    int arr[5]={4,1,5,2,3};
    insertionsort(arr,n);
    printarry(arr,n);
    
return 0;
}