#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,axu=0,pos=0;
    for (int i=0;i<100;i++)
    {
        cin>>n;
        if(n>axu)
        {
            axu=n;
            pos=i;
        }
    }
    cout<<axu<<"\n"<<pos+1<<"\n"<<endl;
    return 0;
}