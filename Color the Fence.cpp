#include<bits/stdc++.h>
using namespace std;
int x,arr[9],mini=1e9,no,rem,pos,cnt,all;
string s;
int main(){
cin>>x;
for(int i=0;i<9;i++){
    cin>>arr[i];
    if(arr[i]<=mini){
        mini=arr[i];
        no=i+1;
    }
}
if(x<mini){
    cout<<"-1"<<endl;
}
else{
if(x%mini==0){
    for(int i=0;i<(x/mini);i++){
        cout<<no;
    }
    cout<<endl;
}
else{
rem=(x%mini);
all=x/mini;
while(cnt<=all){
        pos=0;
        rem+=mini;
        cnt++;
for(int i=no;i<9;i++){
    if(arr[i]<=rem){
        pos=i+1;
    }
}
if(pos!=0){
    s+=(pos+48);
    rem-=(arr[pos-1]);
}
if(pos==0){
    cnt--;
    break;
}
if(rem==0){
    break;
}
}
for(int i=0;i<all-cnt;i++){
    s+=(no+48);
}
    cout<<s<<endl;
}
}
}
