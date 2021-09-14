#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int coin[x],sum=0,yes=0,cnt=0;
for(int i=0;i<x;i++){
    cin>>coin[i];
    sum+=coin[i];
}
sort(coin,coin+x,greater<int>());
for(int i=0;i<x;i++){
yes+=coin[i];
sum-=coin[i];
cnt++;
if(yes>sum){
    break;
}
}
cout<<cnt<<endl;
}
