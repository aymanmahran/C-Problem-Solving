#include<bits/stdc++.h>
using namespace std;
int x,y,s[1000],e[1000],arr[1001],ans;
int main(){
    for(int i=1;i<=1000;i++){
        arr[i]=i;
    }
    cin>>x>>y;
    for(int i=0;i<y;i++){
        cin>>s[i]>>e[i];
        arr[s[i]]=0;
        arr[e[i]]=0;
    }
    for(int i=1;i<=x;i++){
        if(arr[i]!=0){
            ans=arr[i];
            break;
        }
    }
    cout<<x-1<<endl;
    for(int i=1;i<=x;i++){
        if(ans!=i){
            cout<<ans<<" "<<i<<endl;
        }
    }
}
