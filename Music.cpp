#include<bits/stdc++.h>
using namespace std;
int x,y,z,ans;
int main(){
cin>>x>>y>>z;
while(true){
    if(y>=x){
        break;
    }
    y*=z;
    ans++;
}
cout<<ans<<endl;
}
