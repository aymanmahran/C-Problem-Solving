#include<bits/stdc++.h>
using namespace std;
long long x,y,z,s,e,m,a,b,c;
int main(){
    cin>>x>>y>>z;
    s=1;
    e=x*y+1;
    while(s<e){
        m=s+(e-s)/2;
        a=0;
        for(int i=1;i<=x;i++){
            a+=min(y,(m)/i);
        }
        if(z>a){
            s=m+1;
        }
        else e=m;
    }
    cout<<e<<endl;
}
