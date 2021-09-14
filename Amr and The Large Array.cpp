#include<bits/stdc++.h>
using namespace std;
int x,arr[100000],cnt,e[1000001],sum,s[1000001],ss,ee=1e9;
map<int,int>ans,ind;
int main(){
cin>>x;
for(int i=0;i<1000001;i++){
    s[i]=1000001;
}
for(int i=0;i<x;i++){
    cin>>arr[i];
    ans[arr[i]]++;
    s[arr[i]]=min(s[arr[i]],(i+1));
    e[arr[i]]=max(e[arr[i]],(i+1));
}
for(int i=0;i<x;i++){
    if(ans[arr[i]]>sum){
        sum=ans[arr[i]];
    }
    //cout<<arr[i]<<" "<<s[arr[i]]<<" "<<e[arr[i]]<<endl;
}
for(int i=0;i<x;i++){
    if(ans[arr[i]]==sum){
        ind[cnt]=arr[i];
        cnt++;
    }
}
for(int i=0;i<cnt;i++){
    if(abs(s[ind[i]]-e[ind[i]])<abs(ss-ee)){
        ss=s[ind[i]];
        ee=e[ind[i]];
    }
}
cout<<ss<<" "<<ee<<endl;
}
