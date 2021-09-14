#include<bits/stdc++.h>
using namespace std;
long double a,b,c,d,x,y;
int main(){
cin>>a>>b>>c>>d;
x=a/b;
y=(1-(a/b))*(1-(c/d));
x=x/(1-y);
cout<<fixed<<setprecision(12)<<x<<endl;
}
