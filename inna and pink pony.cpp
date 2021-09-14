#include<bits/stdc++.h>
using namespace std;
int l,w,s,e,x,y,d,di,ans=1e9;
bool flag=false;
int cor[4][2];
int main(){
cin>>l>>w>>s>>e>>x>>y;
cor[0][0]=1;
cor[0][1]=1;
cor[1][0]=1;
cor[1][1]=w;
cor[2][0]=l;
cor[2][1]=1;
cor[3][0]=l;
cor[3][1]=w;
for(int i=0;i<4;i++){
        d=abs(s-cor[i][0]);
        di=abs(e-cor[i][1]);
        if(d%x==0&&di%y==0){
            d/=x;
            di/=y;
        if((d%2==0&&di%2==0)||(d%2==1&&di%2==1)){
                if(d==0&&di==0){
                ans=min(ans,d);
                flag=true;
                }
                else if(l>x&&w>y){
                d=max(d,di);
                ans=min(ans,d);
                flag=true;
                }
        }
       }
}
if(flag){
cout<<ans<<endl;
}
else{
    cout<<"Poor Inna and pony!"<<endl;
}
}
