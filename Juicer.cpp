#include<bits/stdc++.h>
using namespace std;
int x,a,b,arr[100001],cnt,ans;
int main(){
    cin>>x>>a>>b;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        if(arr[i]<=a){
            cnt+=arr[i];
            if(cnt>b){
                ans++;
                cnt=0;
            }
        }
    }
    if(cnt>b)ans++;
    cout<<ans<<endl;
}
