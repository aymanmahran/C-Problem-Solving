#include<bits/stdc++.h>
using namespace std;
long long x,arr[100000],ans[100000],cnt,s=-1,e=-1,no,y,f;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    ans[i]=arr[i];
}
sort(ans,ans+x);
for(int i=0;i<x-1;i++){
    if(arr[i]<arr[i+1]){
        if(f){
        e=i+1;
        break;
    }
    }
    if(arr[i]>arr[i+1]&&(!f)){
        s=i;
        f=1;
    }
}
if(s==-1&&e==-1){
        cout<<"yes"<<endl<<"1 1"<<endl;
        exit(0);
}
if(e==-1){
e=x;
}
reverse(arr+s,arr+e);
for(int i=0;i<x;i++){
    if(arr[i]!=ans[i]){
        cout<<"no"<<endl;
        exit(0);
    }
}
s+=1;
    cout<<"yes"<<endl<<min(s,e)<<" "<<max(s,e)<<endl;
}
