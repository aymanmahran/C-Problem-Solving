#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin>>x;
    long long drink[x];
    double bum=0,pot=x*100;
    for(long long i=0;i<x;i++){
        cin>>drink[i];
        bum+=drink[i];
    }
    double h=(bum/pot)*100;
    printf("%.12f",h);
    cout<<endl;
}
