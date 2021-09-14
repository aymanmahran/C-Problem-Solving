#include<bits/stdc++.h>
using namespace std;
int x,arr[1000],maxi,ans;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    maxi=max(arr[i],maxi);
}
for(int i=0;i<maxi;i++){
    for(int j=0;j<x;j++){
        if(arr[j]==0){
            if(j==0||j==x-1){
                cout<<ans<<endl;
                exit(0);
            }
            else{
                if(arr[j-1]==0||arr[j+1]==0){
                    cout<<ans<<endl;
                    exit(0);
                }
            }
    }
    }
    for(int j=0;j<x;j++){
        if(arr[j]!=0){
            arr[j]--;
        }
    }
    ans++;
}
cout<<ans<<endl;
}
