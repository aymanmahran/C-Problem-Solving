#include<bits/stdc++.h>
using namespace std;
int x,y,a,s[1000],e[1000];
long double arr[1000];
int main(){
cin>>a>>x>>y;
for(int i=0;i<a;i++){
    cin>>s[i]>>e[i];
    if((e[i]-y)==0){
        arr[i]=1e9;
        continue;
    }
    arr[i]=(1.0*(x-s[i]))/(y-e[i]);
}
set<long double>ss(arr,arr+a);
cout<<ss.size()<<endl;
}
