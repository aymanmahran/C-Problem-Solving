#include<bits/stdc++.h>
using namespace std;
int x,y,z,m,a,pm=1,st=1,en=1;
int main(){
cin>>x>>y>>z;
m=(x*y)%z;
a=(x*y)/z;
for(int i=1;i<=z;i++){
    if(i==z)a+=m;

    cout<<a<<" ";
    for(int j=0;j<a;j++){
        if(en>y||en<1){
            st++;
            pm*=-1;
            en+=pm;
        }
        cout<<st<<" "<<en<<" ";
        en+=pm;
    }
cout<<endl;
}
}
