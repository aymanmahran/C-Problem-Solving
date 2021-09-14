#include<bits/stdc++.h>
using namespace std;
double x,y,x1,yy,d1,d,a,b;
int main(){
cin>>a>>b>>d>>x1>>yy>>d1;
x=a;
y=b;
x=fabs(x-x1);
y=fabs(y-yy);
x*=x;
y*=y;
x+=y;
x=sqrt(x);
x-=d1;
x-=d;
x/=2;
if(x>=0){
cout<<fixed<<setprecision(15)<<x<<endl;
}
else if(x<=0){
x=a;
y=b;
x=fabs(x-x1);
y=fabs(y-yy);
x*=x;
y*=y;
x+=y;
x=sqrt(x);
x+=min(d1,d);
x=max(d1,d)-x;
x/=2;
if(x>=0){
cout<<fixed<<setprecision(15)<<x<<endl;
}
else{
    cout<<"0.000000000000000"<<endl;
}
}
}
