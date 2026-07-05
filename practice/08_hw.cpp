#include <iostream>
using namespace std;

/*
int arth(int n)
{
    int ap=0;
    for (int i = 1; i <=n; i++)
    {
         ap=(3*i+7);
        cout<<ap<<endl;
        // return ap;
    }
    // return ap;

}
int main(){
    int ans=arth(3);
    cout<<ans;
return 0;
}
//output: 10,13,16,4
*/

int setbit(int a, int b)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1)
        {  
            // int setbita = a & 1;
            count++;
        }
            a=a >> 1;

        // return count ;
    }
        while (b != 0)
        {
            // int setbitb = b & 1;
            if (b & 1)
            {
                count++;
            }
                b=b >> 1;

            // return count;
        }
    
    return count;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = setbit(a,b);
    cout << "answer is" << ans;
    return 0;
}