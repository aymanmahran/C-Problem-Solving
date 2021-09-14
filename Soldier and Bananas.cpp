#include<bits/stdc++.h>
using namespace std;
long long x,y,z,ans;
int main(){
cin>>x>>y>>z;
for(int i=1;i<=z;i++){
    ans+=(i*x);
}
if(ans>y)cout<<ans-y<<endl;
else cout<<"0"<<endl;
}
