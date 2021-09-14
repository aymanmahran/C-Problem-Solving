#include<bits/stdc++.h>
using namespace std;
long long n,arr[100],x,y,pos;
long double sp,ans=1e11,d1,xx,yy,dis,v1,v2;
int main(){
cin>>n>>v1>>v2;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>x>>y;
if(v2>v1){
    cout<<"2"<<endl;
}
else{
    for(int i=1;i<n;i++){
    xx=(x-arr[i])*(x-arr[i]);
    yy=y*y;
    sp=xx+yy;
    sp=sqrt(sp);
    d1=sp/v2;
    d1+=(arr[i]/v1);
    if(d1<ans){
        ans=d1;
        pos=i+1;
        dis=abs(arr[i]-x);
    }
    else if(d1==ans){
        if(dis>abs(arr[i]-x)){
            pos=i+1;
        }
    }
  }
  cout<<pos<<endl;
}
}
