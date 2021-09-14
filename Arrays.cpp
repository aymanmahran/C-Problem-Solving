#include<bits/stdc++.h>
using namespace std;
long long x,y,a,b,aa[100000],bb[100000];
int main(){
cin>>x>>y>>a>>b;
for(int i=0;i<x;i++){
    cin>>aa[i];
}
for(int i=0;i<y;i++){
    cin>>bb[i];
}
sort(aa,aa+x);
sort(bb,bb+y,greater<long long>());
if(aa[a-1]>=bb[b-1]){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
