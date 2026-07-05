#include <vector>
#include<iostream>
using namespace std;

int peakmountain(int arr[], int size)
{

    int s = 0, e = size - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
            s = mid + 1;
        else
            e = mid;

        mid = (s + e) / 2;
    }
    return s;
}

int main()
{
    int arr[5] = {1, 3, 5, 3, 3};
    cout << " mountain is" << peakmountain(arr, 5) << endl;
    return 0;
}

// #include <iostream>
// // #include <vector>
// using namespace std;

// int peakmountain(int arr[], int size) {
//     int s = 0, e = size - 1;

//     while (s < e) {
//         int mid = (s + e) / 2;

//         if (arr[mid] < arr[mid + 1]) {
//             // We're in the increasing part
//             s = mid + 1;
//         } else {
//             // We're in the decreasing part or at peak
//             e = mid;
//         }
//     }

//     return s; // or return e; both are equal here
// }

// int main() {
//     int arr[5] = {1, 3, 5, 3, 3};
//     cout << "Mountain peak index is " << peakmountain(arr, 5) << endl;
//     return 0;
// }
