#include<bits/stdc++.h>
using namespace std;
long long x,arr[100001],cnt=1,ans;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
arr[x]=1e11;
for(int i=0;i<x;i++){
    if(arr[i]==arr[i+1]){
        cnt++;
    }
    else{
        ans+=(cnt*(cnt+1)/2);
        cnt=1;
    }
}
cout<<ans<<endl;
}
