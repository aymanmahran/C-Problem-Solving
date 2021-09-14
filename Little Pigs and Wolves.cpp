#include<bits/stdc++.h>
using namespace std;
int x,y,ans,cnt;
string s[12],d;
int main(){
cin>>x>>y;
for(int i=1;i<=x;i++){
        s[i]=" ";
        cin>>d;
        s[i]+=d;
        s[i]+=" ";
}
for(int i=1;i<=x;i++){
    for(int j=1;j<=y;j++){
        if(s[i][j]=='W'){
            if(s[i+1][j]=='P'){
                cnt++;
            }
            if(s[i-1][j]=='P'){
                cnt++;
            }
            if(s[i][j+1]=='P'){
                cnt++;
            }
            if(s[i][j-1]=='P'){
                cnt++;
            }
        }
        if(cnt>0){
            ans++;
        }
        cnt=0;
    }
}
cout<<ans<<endl;
}
