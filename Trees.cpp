#include<bits/stdc++.h>
using namespace std;
int x,arr[100002],ans,ch[1000001],m;
int main(){
    cin>>x;
    m=x/2;
    if(x%2)m++;
    for(int i=1;i<=x;i++){
        cin>>arr[i];
        if(i<=m){
            if(arr[i]-(i-1)>0)ch[arr[i]-(i-1)]++;
        }
        else{
            if(arr[i]-(x-i)>0)ch[arr[i]-(x-i)]++;
        }
    }
    for(int i=1;i<100001;i++){
        ans=max(ans,ch[i]);
        //if(ch[i]==8)cout<<i<<endl;
    }
    cout<<x-ans<<endl;
}
