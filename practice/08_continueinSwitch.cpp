#include<iostream>
using namespace std;

int main(){
  /*  int n=4;
    switch(n){
        case 1:
        break;
        case 2:
        break;
        case 3:
        {cout<<"3"<<endl;
        continue;}
        break;
        case 4:
        cout<<"fuck u";
    }*/
//    how many notes needed

/*
int amt=1330;
int hnotes=amt/100;
amt=amt%100;
int Fnotes=amt/50;
amt=amt%50;
int Tnotes=amt/20;
amt=amt%20;
int Onotes=amt/1;

cout<<"total notes"<<hnotes+Fnotes+Tnotes+Onotes<<endl;  */

// how to do using switch

    int amount = 1330;
    int hundred = 0, fifty = 0, twenty = 0, one = 0;

    while (amount > 0) {
        switch (amount >= 100 ? 100 : amount >= 50 ? 50 : amount >= 20 ? 20 : 1) {
            case 100:
                hundred++;
                amount -= 100;
                break;
            case 50:
                fifty++;
                amount -= 50;
                break;
            case 20:
                twenty++;
                amount -= 20;
                break;
            case 1:
                one++;
                amount -= 1;
                break;
        }
    }

    cout << "₹100 notes: " << hundred << endl;
    cout << "₹50 notes: " << fifty << endl;
    cout << "₹20 notes: " << twenty << endl;
    cout << "₹1 notes: " << one << endl;



return 0;
}