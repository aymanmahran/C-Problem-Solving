#include<bits/stdc++.h>
using namespace std;
long long x,mul=9,no,ans;
stringstream c;
string s;
int main(){
cin>>x;
c<<x;
c>>s;
for(int i=1;i<s.size();i++){
    ans+=(i*mul);
    mul*=10;
    no*=10;
    no+=9;
}
x-=no;
ans+=(x*s.size());
cout<<ans<<endl;
}
