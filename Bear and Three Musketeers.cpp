#include<bits/stdc++.h>
using namespace std;
int x,y,a[4000],b[4000],ab[4001][4001],arr[4001],ans=1e9,sum;
int main(){
cin>>y>>x;
for(int i=0;i<x;i++){
    cin>>a[i]>>b[i];
    ab[a[i]][b[i]]=1;
    ab[b[i]][a[i]]=1;
    arr[a[i]]++;
    arr[b[i]]++;
}
for(int i=0;i<x;i++){
    for(int j=1;j<=y;j++){
        if((ab[a[i]][j]&&ab[b[i]][j])){
            sum=arr[a[i]]+arr[b[i]]+arr[j]-6;
            ans=min(ans,sum);
        }
    }
}
if(ans==1e9)ans=-1;

cout<<ans<<endl;
}
