#include<bits/stdc++.h>
using namespace std;
int x,y,cnt;
string s[16],a[200],b[200],aaa[16],d[16],n;
map<string,int>arr;
bool flag;
void ttp(int ind,int sz){
    flag=false;
if(ind==x){
    if(sz>cnt){
        cnt=sz;
        for(int i=0;i<sz;i++){
            aaa[i]=d[i];
        }
    }
    return;
}
for(int i=0;i<sz;i++){
        n=s[ind]+":";
        n+=d[i];
    if(arr[n]==1){
        flag=true;
        break;
    }
}
if(flag==0){
    d[sz]=s[ind];
    ttp(ind+1,sz+1);
    d[sz]="";
}
ttp(ind+1,sz);
}
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>s[i];
}
for(int i=0;i<y;i++){
    cin>>a[i]>>b[i];
    n=a[i]+":";
    n+=b[i];
    arr[n]=1;
    n=b[i]+":";
    n+=a[i];
    arr[n]=1;
}
sort(s,s+x);
ttp(0,0);
cout<<cnt<<endl;
for(int i=0;i<cnt;i++){
    cout<<aaa[i]<<endl;
}
}
