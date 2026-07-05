#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {

    int left = 0;
    int mid = 0;
    int right = n-1;

    while(mid<=right) {

       if(arr[mid]==0){
        swap(arr[left],arr[mid]);
        left++;
        mid++;
       }
       if(arr[mid]==1){
        mid++;
       }
       if(arr[mid]==2){
        swap(arr[mid],arr[right]);
        mid++;
        right--;
       }

        
        
    }

}

int main() {

    int arr[10] = {1,1,0,0,2,2,0,0,1,0};

    sortOne(arr, 10);
    printArray(arr, 10);


    return 0;
}