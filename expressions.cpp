#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,z,ans[6];
cin>>x>>y>>z;
ans[0]=(x+y)*z;
ans[1]=x+(y*z);
ans[2]=x+y+z;
ans[3]=x*y*z;
ans[4]=(x*y)+z;
ans[5]=x*(y+z);
sort(ans,ans+6,greater<int>());
cout<<ans[0]<<endl;
}


