#include<iostream>
using namespace std;
/* integer is of 4 byte
    1 byte= 8 bits
    */

int main(){
    int a=4;
    int b=6;
    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<<~a<<endl;
    cout<<"a^b "<<(a^b)<<endl;

    /* while left and right shift
    in +ve numbers padding with zero
    in -ve numbers padding is compiler dependent*/

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    /*increment decrement
    i++ post increment
    ++i pre increment
    i+=1 is same as i=i+1 
    */
   int i=7;
   cout<<++i<<endl;
   cout<<i++<<endl;
   cout<<i--<<endl;
   cout<<--i<<endl;

return 0;
}