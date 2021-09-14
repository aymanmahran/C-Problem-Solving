#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100001],st,e,cnt,sum,ans[100001];
string s;
int main(){
cin>>y>>x;
for(int i=1;i<=x;i++){
    s.clear();
    s=bitset<18>(i).to_string();
    reverse(s.begin(),s.end());
    arr[i]=pow(2,s.find("1"));
}
for(int i=x;i>0;i--){
        if(arr[i]<=y){
            y-=arr[i];
            ans[cnt]=i;
            cnt++;
        }
}
if(y==0){
cout<<cnt<<endl;
for(int i=0;i<cnt;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
else{
    cout<<"-1"<<endl;
}
}
