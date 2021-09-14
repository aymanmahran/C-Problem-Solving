#include<bits/stdc++.h>
using namespace std;
long long x,arr[100000],a[100000],ans,z=1e9;
set<long long>s;
bool flag;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
if(x==1){
    cout<<"-1"<<endl;
}
else{
    for(int i=0;i<x-1;i++){
        if(arr[i]!=arr[i+1]){
            flag=true;
            break;
        }
    }
    if(!flag){
        a[ans]=arr[0];
        ans++;
    }
    else{
            flag=false;
        if(x==2){
            if((arr[1]-arr[0])%2==0){
                a[ans]=arr[0]+(arr[1]-arr[0])/2;
                ans++;
            }
        }
          for(int i=1;i<x;i++){
            z=min(arr[i]-arr[i-1],z);
          }
      for(int i=1;i<x;i++){
        if((arr[i]-arr[i-1])!=z){
            if((arr[i]-arr[i-1])!=z*2){
                ans=1e9;
                break;
            }
            else{
                a[ans]=arr[i-1]+z;
                ans++;
            }
        }

       }
       if(ans>1){
        ans=0;
       }
       else{
        if(ans==0||(ans==1&&x==2)){
            a[ans]=arr[0]-z;
            ans++;
            a[ans]=arr[x-1]+z;
            ans++;
        }
       }
    }
    sort(a,a+ans);
    cout<<ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
}
