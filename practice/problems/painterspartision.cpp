#include<iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int k, int mid)
{
    int painters = 1;
    int unitBoard = 0;
    cout << "checking for mid "<< mid <<endl;

    for (int i = 0; i < n; i++)
    {
        if (unitBoard + arr[i] <= mid)
        {
            unitBoard += arr[i];
        }
        else
        {
            painters++;
            if (painters > k || arr[i] > mid)
            {
                return false;
            }
            unitBoard = arr[i];
        }
        if (painters > k)
        {
            return false;
        }
        cout << " for i " << i << " painters "<< painters << " unitBoard " << unitBoard << endl;
    }
    return true;
}

int paintersPartion(vector<int> arr, int n, int k)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, k, mid))
        {
            cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    vector<int> arr={5,5,5,5};
    return paintersPartion(arr,4,2);
    
}
