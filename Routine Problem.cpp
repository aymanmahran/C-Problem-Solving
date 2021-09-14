#include<bits/stdc++.h>
using namespace std;
long long l,w,x,y,num,num1,num2,ans,den;
double a,b;
int main(){
cin>>l>>w>>x>>y;
den=w*y;
num1=l*y;
num2=x*w;
num=abs(num1-num2);
a=l/(w/1.0);
b=x/(y/1.0);
if(a>=b){
ans=__gcd(num,num1);
cout<<num/ans<<"/"<<num1/ans<<endl;
}
else{
ans=__gcd(num,num2);
cout<<num/ans<<"/"<<num2/ans<<endl;
}
}
