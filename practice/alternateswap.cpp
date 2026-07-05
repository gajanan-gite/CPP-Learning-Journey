#include<iostream>
using namespace std;

int print(int arr[], int size)
{   
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void alternateswap(int arr[], int size){
   for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);//swap working
                                  //temp=a;
                                  //a=b;
                                  //b=temp;
        }
    }
}

int main(){
    int even[8]={5,3,2,5,7,8,5,6};
    int odd[7]={2,5,3,4,8,1,9};

    alternateswap(even,8);
    print(even,8);
    alternateswap(odd,7);
    print(odd,7);

return 0;
}