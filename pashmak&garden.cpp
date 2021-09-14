#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,x=0,y=0;
cin>>a>>b>>c>>d;
x=c-a;
y=d-b;
if(a==c&&b!=d){
    a+=(d-b);
    c+=(d-b);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
else if(b==d&&a!=c){
    b+=(c-a);
    d+=(c-a);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
else if(fabs(x)==fabs(y)){
    swap(b,d);
   cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
else{
    cout<<"-1"<<endl;
}
}
