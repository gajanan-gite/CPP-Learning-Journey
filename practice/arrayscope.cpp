#include<iostream>
using namespace std;

int print(int arr[], int size)
{   
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    // cout<<endl;
}
int sum(int arr[], int size)
{   int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    // hw
    int size;
    cin>>size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    // cout<<"printing of elements of aaray is "<<print(arr,size);

    cout<<"summ of all elements of aaray is "<<sum(arr,size);
    
return 0;
}