#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,s=0;
    for(i=1;i<=5;i++){
        cin >>n;
        if(n%2 == 0){
            s = s+1;
        }
    }
    cout<<s <<" valores pares"<<endl;
    
    return 0;
}