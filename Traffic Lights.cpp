#include<bits/stdc++.h>
using namespace std;
int d,t,s,g,r;
double ans,a;
bool gg=1,rr=0;
int main(){
cin>>d>>t>>s>>g>>r;
ans=(double)t/s;
a=ans;
while(1){
    if(a-g>=0){
        a-=g;
        swap(g,r);
        swap(gg,rr);
    }
    else{
        break;
    }
}
if(gg){
    ans+=((double)(d-t)/s);
}
else{
    ans+=(g-a);
    ans+=((double)(d-t)/s);
}
cout<<fixed<<setprecision(8)<<ans<<endl;
}
