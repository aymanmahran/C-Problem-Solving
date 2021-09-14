#include<bits/stdc++.h>
using namespace std;
int x,arr[123],c,z=-1,ans;
string s;
int main(){
cin>>s>>x;
for(int i=97;i<123;i++){
    cin>>arr[i];
    z=max(z,arr[i]);
}
for(int i=0;i<s.size();i++){
    c=static_cast<int>(s[i]);
    ans+=(arr[c]*(i+1));
}
for(int i=1;i<=x;i++){
    ans+=(z*(i+s.size()));
}
cout<<ans<<endl;
}
