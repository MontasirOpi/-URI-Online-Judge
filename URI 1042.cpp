#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c;
     cin >> a >> b >> c;

     if( a< b && a<c)
     {
          if(b<c)
          {
               cout << a<<"\n" <<b<<"\n" <<c<<"\n" << "\n" << a <<"\n" << b << "\n" << c << "\n";
          }
          else{
               cout << a<<"\n" <<c<<"\n" <<b<<"\n"<< "\n" << a <<"\n" << b << "\n" << c << "\n";
          }
     }
     if(b<a && b<c)
     {
          if(a<c)
          {
               cout<< b <<"\n" << a <<"\n" << c << "\n"<< "\n" << a <<"\n" << b << "\n" << c << "\n";
          }
          else
          {
               cout << b << "\n" << c << "\n" << a << "\n"<< "\n" << a <<"\n" << b << "\n" << c << "\n";
          }
     }
     if(c<a && c<b)
     {
          if(b<a)
          {
               cout << c << "\n" << b << "\n" << a << "\n"<< "\n" << a <<"\n" << b << "\n" << c << "\n";
          }
          else
          {
               cout << c << "\n" << a << "\n" << b << "\n"<< "\n" << a <<"\n" << b << "\n" << c << "\n";
          }
     }
     return 0;
}
