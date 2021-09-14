#include<bits/stdc++.h>
using namespace std;
long long z,a,num=1e9,den=1e9,d,in;
long double ans=1e9,b=1e9,c=1e9,x,y;
int main(){
cin>>x>>y>>z;
for(long long i=1;i<=z;i++){
    a=floorl(((i*x)/y)+0.4);
    d=__gcd(a,i);
   // cout<<a<<" "<<b<<endl;
    if(i/d<=z){
        b=0;
        c=0;
        b=(x/1.0)/y;
        c=(a/1.0)/i;
        if(b>=c)b-=c;
        else if(b<c)b=c-b;
       // cout<<b<<" "<<ans<<endl;
       if(b<ans){
        ans=b;
        num=a/d;
        den=i/d;
       }
       else if(b==ans){
        if(i/d<den){
            den=i/d;
            num=a/d;
        }
        else if(i/d==den){
            if(a/d<num){
                num=a/d;
                den=i/d;
            }
        }
       }
    }
}
cout<<num<<"/"<<den<<endl;
}
