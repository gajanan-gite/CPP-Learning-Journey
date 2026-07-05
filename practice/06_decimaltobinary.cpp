#include<iostream>
#include<math.h>
using namespace std;

// int main(){
//     int n;
//     cout<<"enter no. n"<<endl;
//     cin>>n;

//     int ans=0;
//     int i=0;
//     while(n != 0){
//         int bit= n & 1;
//         ans=( bit * pow(10, i) )+ans; 
     //pow(10,i)..sometimes gives dubble hece not working for some digits
//         n=n>>1;
//         i++;
//     }
//     cout<<ans<<endl;
// return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number n: ";
    cin >> n;

    int ans = 0;
    int place = 1;  // Start with units place

    while(n != 0){
        int bit = n & 1;
        ans = (bit * place) + ans;
        place *= 10;  // Move to next decimal place
        n = n >> 1;
    }

    cout << "Binary (as integer): " << ans << endl;
    return 0;
}