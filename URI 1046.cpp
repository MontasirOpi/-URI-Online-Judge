#include<bits/stdc++.h>
using namespace std;
int main()
{
     int sT,eT,t;
     cin>> sT >> eT;

     if(sT < eT)
     {
          t=eT - sT;
     }
     else
     {
          t = eT+24-sT;

     }
     cout << "O JOGO DUROU " <<t<< " HORA(S)\n";

     return 0;
}
