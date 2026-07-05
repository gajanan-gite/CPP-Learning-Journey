#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int target=6;
    for(int num:arr){
        if (num == target){
            cout<<"target found"<<endl;
            break;
        }
        cout<<"checking"<<endl;;
    }
        // Using 'continue' to skip specific elements
    for (int num : arr) {
        if (num % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << "Odd number: " << num << endl;
    }
return 0;
}