#include<bits/stdc++.h>
using namespace std;
long long x,y,z,a,b,a1,b1,cnt;
int main(){
cin>>x>>y;
for(long long i=1;i<=x;i*=2){
a1=i;
if(a1<=x&&4*a1<=5*y){
      b1=5*a1/4;
      b1=min(b1,y);
      //cout<<a1<<" "<<b1<<" "<<z<<endl;
      if(a1*b1>z||(a1*b1==z&&a1>a)){
        a=a1;
        b=b1;
        z=a*b;
      }
    }
a1=i;
if(a1<=y&&4*a1<=5*x){
      b1=5*a1/4;
      b1=min(b1,x);
     // cout<<a1<<" "<<b1<<endl;
      if(a1*b1>z||(a1*b1==z&&b1>a)){
        a=b1;
        b=a1;
        z=a*b;
      }
    }
}
cout<<a<<" "<<b<<endl;
}
