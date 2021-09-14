#include<bits/stdc++.h>
using namespace std;
long long x,arr[100000],cnt,ans;
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=2;i<x;i++){
        if(arr[i]==arr[i-1]+arr[i-2]){
            cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    ans=max(ans,cnt);
    if(ans==0){
        if(x>=2){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    else{
        cout<<ans+2<<endl;
    }
}
