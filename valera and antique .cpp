#include<bits/stdc++.h>
using namespace std;
int main(){
int x,cnt=0;
long long money ;
cin>>x>>money;
int arr,ans=0,ans2[x];
int price=0;
for(int i=0;i<x;i++){
    cin>>arr;
    ans2[i]=0;
    for(int j=0;j<arr;j++){
        cin>>price;
        if(price<money){
            cnt++;
            ans2[i]=i+1;
        }
    }
    if(cnt>0){
        ans++;
    }
    cnt=0;
}
cout<<ans<<endl;
sort(ans2,ans2+x);
for(int i=0;i<x;i++){
    if(ans2[i]!=0){
        cout<<ans2[i]<<" ";
    }
}
cout<<endl;
}
