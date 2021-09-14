#include<bits/stdc++.h>
using namespace std;
int n,x[300],y[300];
long double arr[100000],a,b,c,d,ans,xx,yy;
bool l,r;
int main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            l=false;
            r=false;
            xx=0;
            yy=0;
        for(int k=0;k<n;k++){
            if(i!=j&&i!=k&&j!=k){
            a=x[j]-x[i];
            b=y[k]-y[j];
            a*=b;
            c=y[j]-y[i];
            d=x[k]-x[j];
            c*=d;
            a-=c;
            a*=0.5;
            //cout<<a<<endl;
            if(a<0){
                xx=max(-1*a,xx);
                l=true;
            }
            else{
                yy=max(a,yy);
                r=true;
            }
            if(l&&r){
                ans=max(ans,xx+yy);
                //cout<<ans<<" "<<i<<" "<<j<<" "<<k<<endl;
            }
         }
       }
    }
}
cout<<fixed<<setprecision(6)<<ans<<endl;
}
