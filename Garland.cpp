#include<bits/stdc++.h>
using namespace std;
string s,d;
int a[123],b[123],h,ans;
int main(){
cin>>s>>d;
for(int i=0;i<s.size();i++){
    h=static_cast<int>(s[i]);
    a[h]++;
}
for(int i=0;i<d.size();i++){
    h=static_cast<int>(d[i]);
    b[h]++;
}
for(int i=97;i<123;i++){
    if(b[i]>0&&a[i]==0){
        cout<<"-1"<<endl;
        exit(0);
    }
    if(b[i]>0&&a[i]>0){
        ans+=min(b[i],a[i]);
    }
}
cout<<ans<<endl;
}
