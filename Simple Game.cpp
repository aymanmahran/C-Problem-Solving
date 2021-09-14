#include<bits/stdc++.h>
using namespace std;
long long x,y,a,b,ans;
int main(){
cin>>x>>y;
a=y-1;
b=x-y;
if(x==1){
cout<<"1"<<endl;
exit(0);
}
if(a<b){
    ans=y+1;
}
else{
    ans=y-1;
}
cout<<ans<<endl;
}
