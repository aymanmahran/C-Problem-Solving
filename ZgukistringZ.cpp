#include<bits/stdc++.h>
using namespace std;
string x,a,b,d;
int xx[123],aa[123],bb[123],bns,ans,f,s,v;
bool flag;
int main(){
cin>>x>>a>>b;
for(int i=0;i<x.size();i++){
    xx[x[i]]++;
}
for(int i=0;i<a.size();i++){
    aa[a[i]]++;
}
for(int i=0;i<b.size();i++){
    bb[b[i]]++;
}
bns=1e9;
for(int k=0;k<b.size();k++){
    bns=min(bns,xx[b[k]]/bb[b[k]]);
}
for(int i=0;i<=bns;i++){
    ans=1e9;
    for(int k=0;k<a.size();k++){
    ans=min(ans,(xx[a[k]]-(bb[a[k]]*i))/aa[a[k]]);
}
if(i+ans>(f+s)){
    f=ans;
    s=i;
  }
}
    for(int i=0;i<f;i++){
        cout<<a;
    }
    for(int i=0;i<s;i++){
        cout<<b;
    }
    for(int i=97;i<123;i++){
        char c=i;
        v=xx[i]-(aa[i]*f)-(bb[i]*s);
        for(int j=0;j<v;j++){
            cout<<c;
        }
    }
cout<<endl;
}
