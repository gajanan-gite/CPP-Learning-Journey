// ## Patterns
// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    /* ## pattern 1
    ****
    ****
    ****
    ****
    */
    int i = 1;
    while ( i <=n){
        int j = 1;
        while(j<=n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
  
    // for ( int i =0; i<n;i++){ //rows
    //     for ( int j =0 ; j < n;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*  pattern 2
    1111
    2222
    3333
    4444
    */

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n)
    //     {
    //      cout<<i;
    //      j++;
    //     }   
    //     cout<<endl;
    //     i++;
    // }

    /* pattern 3
1234
1234
1234
1234*/


// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<j;
//         j=j+1;
// }
//     cout<<endl;
//     i++;

// }

/*  Pattern 4
321
321
321
*/
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1;
//         j=j+1;
        
//     }
//     cout<<endl;
//     i++;

// }

/*  Pattern 5
123
456
789
*/

// int i=1;
// int count=1;
// while(i<=n){
//     int j=1;
//     while (j<=n){
//         cout<<count<<" ";
//         count=count+1;
//         j++;
//     }
//     cout<<endl;
//     i=i+1;

// }

    return 0;
}