#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<n<<endl;

    // printing 1st traingle
    int i=1;
    while(i<=n)
    {  
         int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        
    
    // printing stair wala tringle
        int star1=i-1;
        while(star1){
            cout<<"*";
            star1--;
        }
    //printing 3rd triangle
    int star2=i-1;
    while(star2){
        cout<<"*";
        star2--;
    }
    int z=n+1-i;
    while(z){
        cout<<z;
        z--;
    }
        cout<<endl;
        i++;
    }
return 0;
}