#include<bits/stdc++.h>
using namespace std;
long long x,y,f,s,ans=1e18;
void tot(int f,int s,long long no){
if(no>=x&&(((s+f)%2)==0)){
if(s==f){
ans=min(ans,no);
return;
}
else{
    return;
}
}
tot(f+1,s,no*10+4);
tot(f,s+1,no*10+7);
}

int main(){
cin>>x;
tot(0,0,0);
cout<<ans<<endl;
}
