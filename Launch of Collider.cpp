#include<bits/stdc++.h>
using namespace std;
long long x,arr[200001],ans=1e10;
string s;
int main(){
    cin>>x>>s;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        if(s[i]=='R'&&s[i+1]=='L')ans=min(ans,(arr[i+1]-arr[i])/2);
    }
    if(ans==1e10)ans=-1;
    cout<<ans<<endl;
}
