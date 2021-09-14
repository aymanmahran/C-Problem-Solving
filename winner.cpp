#include <bits/stdc++.h>
using namespace std;
map<string,int>p,t;
string s[1001];
int o[1001];
int m,n,i;

int main(){


cin>>n;

for(;i<n;i++){
    cin>>s[i]>>o[i],p[s[i]]+=o[i];
}
for(i=0;i<n;i++){
m=max(m,p[s[i]]);
}
for(int i=0;p[s[i]]<m||(t[s[i]]+=o[i])<m;i++){
cout<<s[i];
}
}
