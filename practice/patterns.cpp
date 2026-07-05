#include<iostream>
using namespace std;

int main(){
/*
   @
  @@@
 @@@@@
@@@@@@@
 @@@@@
  @@@
   @
*/
/*
1234554321
1234**4321
123****321
12******21
1********1
*//*


int i=1;
while(i<=n){
   int j=1;
   while(j<=n-i+1){
      cout<<j;
      j++;
   }
   int star1=i-1;
   while(star1){
      cout<<"*";
      star1--;
   }
   int star2=i-1;
   while(star2){
      cout<<"*";
      star2--;
   }
   int z=1;
   while(z<=n-i+1){
      cout<<n-i-z+2;
      z++;
   }
   cout<<endl;
   i++;
}
*/
int n;
cin>>n;
int i=1;
while(i<=n){
   int j=1;
   while(j<=n-i+1){
      cout<<" ";
      
   }
   int star1=i;
   while(star1){
      cout<<"*";
      star1--;
   }
   int star2=i-1;
   while(star2){
      cout<<"*";
      star2--;
   }
   int z=1;
   while(z<=n-i+1){
      cout<<" ";
      
   }
   cout<<endl;
   i++;
}

return 0;
}