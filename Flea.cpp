#include<bits/stdc++.h>
using namespace std;
long long x,y,z,ans,a,b,c,d;
int main(){
    cin>>x>>y>>z;
    a=ceil((double)x/z);
    b=ceil((double)y/z);
    ans=a*b;
    c=x-(a+(a-1)*(z-1));
    d=y-(b+(b-1)*(z-1));
    ans=ans+ans*c*d+ans*c+ans*d;
    cout<<ans<<endl;
}
