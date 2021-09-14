#include<bits/stdc++.h>
using namespace std;
int x,y,st[101],en[101],ti[101],sc[101],ans,mini=1e9,s;
int main(){
cin>>x>>y;
for(int i=0;i<y;i++){
    cin>>st[i]>>en[i]>>ti[i]>>sc[i];
}
for(int i=1;i<=x;i++){
    for(int j=0;j<y;j++){
        if(st[j]<=i&&i<=en[j]){
            if(ti[j]<mini){
                mini=ti[j];
                s=sc[j];
            }
        }
    }
    mini=1e9;
    ans+=s;
    s=0;
}
cout<<ans<<endl;
}
