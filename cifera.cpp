#include<bits/stdc++.h>
using namespace std;
int main(){
long double x,y,cnt=0,t=0;
cin>>x>>y;
t=x;
for(;;){
    if(x==y){
        cout<<"YES\n"<<cnt<<endl;
        break;
    }
    if(x<y){
        x*=t;
        cnt++;
    }
    if(x>y){
        cout<<"NO\n";
        break;
    }
}
}
