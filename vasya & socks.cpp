#include<bits/stdc++.h>
using namespace std;
int x,y,ans,cnt;
int main(){
cin>>x>>y;
while(x!=0){
    ans++;
    cnt++;
    x--;
    if(cnt==y){
    x++;
    cnt=0;
    }
}
cout<<ans<<endl;
}
