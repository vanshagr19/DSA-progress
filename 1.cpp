#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0;
    int ans=0;
    cout<<"enter the number";
    cin>>n;
    while(n!=0)
    {
        int bit = n&1;
        int x =pow(10,i);
        ans=(bit*x)+ans;
        n=n>>1;
        i++;

    }
    cout<<ans;

}
