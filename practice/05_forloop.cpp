#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"enter n"<<endl;
    // cin>>n;

   /* cout<<"print count 1 to n"<<endl;
    int i=1;
    for( ; ;){
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        } 
        i++;
    }*/

   /* // fibonachi series
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=10; i++){
        int nextno=a+b;
        cout<<nextno<<" ";
        a=b;
        b=nextno;
        
    }
        */

      /*  //prime no.
    bool isprime=1;
    for (int i=2; i<n;i++){
        if(n % i==0){
            //cout<<"no is not prime"<<endl;
            isprime=0;
            break;
        }
    }
    if(isprime==0){
        cout<<"not prime no."<<endl;
    }
    else{
        cout<<"is prime no."<<endl;
    }
    */
   

// continue

// for(int i=0; i<=5; i++){
//     cout<<"hi"<<endl;
//     cout<<"babe"<<endl;
//     continue;
//     cout<<"rand"<<endl;
// }

// for (int i=0; i<=15;i+=2){
//     cout<<i<<" ";
//     if (i&1){
//         continue;
//     }
//     i++;
//     //output 0 3 5 7 9 11 13 15

    

//     // variable and scope

//     int a=3;
//     cout<<a<<endl;
    
//     if(true){
//         int a=5;
//         cout<<a<<endl;
//     }
//     cout<<a<<endl;
    
//     // operator precedence
// }

//Q
for(int i=0;i<=5;i++){
    for(int j=i;j<=5;j++){
        cout<<i<<" "<<j<<endl;
    }
}
//result
//0 0
// 01
// 02
// .
// .
// .
return 0;
}