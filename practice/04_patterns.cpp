 #include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;

/* pattern 6
#
##
###
####
*/

// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<"#";
//         j=j+1;
//     }
//     cout<<endl;
//     i++;
// }


/* Pattern 7
1
22
333
4444
*/

// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<i;
//         j=j+1;
//     }
//     cout<<endl;
//     i++;
// }

/* Pattern 8
1
23
456
78910
*/
// int i=1;
// int count=1;
// while(i<=n){
//     int j=1;
//     while (j<=i){
//         cout<<count<<" ";
//         count=count+1;
//         j++;
//     }
//     cout<<endl;
//     i=i+1;

// }

/* pattern 9
1
23
345
4567
56789
*/
// int i=1;
// while(i<=n){
//     int j=1;
//     int value=i;

//     while(j<=i){
//         cout<<value<<" ";
//         value=value+1;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

    //### second way
    // int i=1;
    // while(i<=n){
    //     int j=0;
        

    //     while(j<i){
    //         cout<<i+j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    /* pattern 10
    1
    21
    321
    4321
    */
    // int i=1;
    // while(i<=n){
    //     int j=i;
    //     while(j--){
    //         cout<<j+1;
            
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i-j+1;
    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    // }

    /* ## PATTERN 11
    AAA
    BBB
    CCC
    */
//    int row=1;
//    while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch='A'+row-1;
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//    }

/* pattern 12
ABC
ABC
ABC
*/
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         char ch='A'+j-1;
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/* pattern 13
ABC
DEF
GHI*/

// int i=1;
// char ch='A';
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<ch<<" ";
//         ch++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/*pattern 14
ABC
BCD
CDE
// */
//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch='A'+i-1;//or use (a+i+j-2) 
//         while(j<=n){
//             cout<<ch;
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

/*parttern 15
A
BB
CCC
*/
// int i=1;
// while(i<=n){
//     char ch='A'+i-1;
//     int j=1;
//     while(j<=i){
//         cout<<ch;
//         j++;

//     }
//     cout<<endl;
//     i++;
// }

/* Pattern 16
A
BC
DEF
GHIJ*/
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//     char ch='A'+i+j-2;
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/* Pattern 17
A
BC
CDE
DEFG
*/

// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         char ch ='A'+i+j-2;
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/* Pattern 18
D
CD
BCD
ABCD
*/
// int i=1;
// while(i<=n){
//         char ch='A'+n-i;
//         int j=1;
//     while(j<=i){
//         cout<<ch;
//         ch++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
/* PATTERN 19
ABC
BCD
CDE
*/
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         char ch='A'+i+j-2;
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;

// }


/* pattern 19
   #
  ##
 ###
####
*/
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         if (j<=n-i){
//             cout<<" ";
//         }
//         else{
//             cout<<"*";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// second way

// int row=1;
// while(row<=n){
//     //space print karlo
//     int space=n-row;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     //star print
//     int col=1;
//     while(col<=row){
//         cout<<"*";
//         col++;
//     }
//     cout<<endl;
//     row++;
// }

/* pattern 20
####
###
##
#
*/
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n-i+1){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/*
####
 ###
  ##
   #
*/
// int i=1;
// while(i<=n){
    
//     int space=i-1;
//     while(space){
//         cout<<" ";
//         space=space-1;
//     }
//     int j=1;
//     while(j<=n-i+1){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/* pattern 21
1111
 222
  33
   4
*/
// int i=1;
// while(i<=n){

//    int space=i-1;
//    while(space){
//       cout<<" ";
//       space=space-1;
//    }
//    int j=1;
//    while(j<=n-i+1){
//       cout<<i;
//       j++;
//    }
//    cout<<endl;
//    i++;
// }

/*
   1
  22 
 333
4444
*/

// int i=0;
// while(i<=n){
//    int space=n-i;
//    while(space){
//       cout<<" ";
//       space=space-1;
//    }
//    int j=1;
//    while(j<=i){
//       cout<<i;
//       j++;
//    }
//    cout<<endl;
//    i++;
// }

/* pattern
1234
 234
  34
   4
*/
// int i=1;
// while(i<=n){
//    int space=i-1;
//    while(space){
//       cout<<" ";
//       space--;
//    }
//    int j=1;
//    while(j<=n-i+1){
//       cout<<i+j-1;
//       j++;
//    }
//    cout<<endl;
//    i++;
// }

/*
   1
  23
 456
78910
*/
// int i=1;int count=1;
// while(i<=n){
//    int space=n-i;
//    while(space){
//       cout<<" ";
//       space--;
//    }
//    int j=1;
//    while(j<=i){
//       cout<<count;
//       count++;
//       j++;
//    }
//    cout<<endl;
//    i++;
// }
/*
   1
  121
 12321
1234321
// */
// int i=1;
// while(i<=n){
//    // 1st tringle
//    int space=n-i;
//    while(space){
//       cout<<" ";
//       space--;
//    }
//    //2nd tringle
//    int j=1;
//    while(j<=i){
//       cout<<j;
//       j++;
//    }
//    // 3rd tringle
//    int start =i-1;
//    while(start){
//       cout<<start;
//       start--;
//    }
//    cout<<endl;
//    i++;
// }

/*
1234554321
1234**4321
123****321
12******21
1********1
*/
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

     return 0;
}