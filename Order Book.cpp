#include<bits/stdc++.h>
using namespace std;
int x,y,z,arr[100001],arr2[100001],a[100000],b[100000],cnt,dnt;
char c;
set<int>s,d;
set<int>::iterator it;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>c;
    if(c=='B'){
        cin>>a[cnt]>>z;
        arr[a[cnt]]+=z;
        cnt++;
    }
    else{
        cin>>b[dnt]>>z;
        arr2[b[dnt]]+=z;
        dnt++;
    }
}
for(int i=0;i<cnt;i++){
    s.insert(a[i]);
}
for(int i=0;i<dnt;i++){
    d.insert(b[i]);
}
cnt=0;
dnt=0;
for(it=d.begin();it!=d.end();++it){
    b[dnt]=*it;
    dnt++;
}
for(it=s.begin();it!=s.end();++it){
    a[cnt]=*it;
    cnt++;
}
s.clear();
d.clear();
sort(a,a+cnt,greater<int>());
sort(b,b+dnt);
if(cnt>=y){
   for(int i=0;i<y;i++){
       s.insert(a[i]);
}
}
else{
    for(int i=0;i<cnt;i++){
        s.insert(a[i]);
}
}
if(dnt>=y){
   for(int i=0;i<y;i++){
       d.insert(b[i]);
}
}
else{
    for(int i=0;i<dnt;i++){
        d.insert(b[i]);
}
}
cnt=0;
dnt=0;
for(it=d.begin();it!=d.end();++it){
    b[dnt]=*it;
    dnt++;
}
for(it=s.begin();it!=s.end();++it){
    a[cnt]=*it;
    cnt++;
}
sort(a,a+cnt,greater<int>());
sort(b,b+dnt,greater<int>());
for(int i=0;i<dnt;i++){
    cout<<"S "<<b[i]<<" "<<arr2[b[i]]<<endl;
}
for(int i=0;i<cnt;i++){
    cout<<"B "<<a[i]<<" "<<arr[a[i]]<<endl;
}
}
