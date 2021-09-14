#include<bits/stdc++.h>
using namespace std;
int x,a,b,c,d,ans;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>a>>b>>c>>d;
    a=abs(a-c)+1;
    b=abs(b-d)+1;
    a*=b;
    ans+=a;
}
cout<<ans<<endl;
}
