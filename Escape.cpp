#include<bits/stdc++.h>
using namespace std;
double sp,sd,x,d,f,pp,pd,t;
int ans;
int main(){
    cin>>sp>>sd>>d>>f>>x;
    pp=sp*d;
    pd=0;
    if(sp>=sd){
        cout<<"0"<<endl;
        exit(0);
    }
    while(true){
        t=-pp/(sp-sd);
        pp+=sp*t;
        pd+=sd*t;
        //cout<<t<<" "<<pp<<" "<<pd<<endl;
        if(pp>=x)break;
        t=pd/sd;
        pp+=sp*t;
        pp+=sp*f;
        pd=0;
        ans++;
    }
    cout<<ans<<endl;
}
