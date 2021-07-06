#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e=0,p=0,ne=0;
    for(int i=1;i<=5;i++){
        cin >> n;
        if(n%2==0){
            e=e+1;
        }
        if(n>0){
            p=p+1;
        }
        if(n<0){
            ne=ne+1;

        }
    }
    cout << e << " valor(es) par(es)"<<endl;
    cout << 5-e << " valor(es) impar(es)" <<endl;
    cout << p << " valor(es) positivo(s)" <<endl;
    cout << ne<< " valor(es) negativo(s)" <<endl;

    return 0;
}