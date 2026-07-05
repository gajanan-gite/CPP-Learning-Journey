#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,3,2,4,5};

    // ## basic approch to print all subarray
    // for(int st=0;st<n;st++){
    //     for(int end=st;end<n;end++){
    //         for(int i=st;i<=end;i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // ### for finding maximum subarray sum

    //     int maxSum=INT32_MIN;
    //     for(int st=0;st<n;st++){
    //         int currSum=0;
    //         for(int end=st;end<n;end++){
    //             currSum+=arr[end];
    //             maxSum=max(currSum,maxSum);
    //     }
    // }
    //     cout<<" max subarray sum "<<maxSum<<endl;

    // kadane approch

    
return 0;
}