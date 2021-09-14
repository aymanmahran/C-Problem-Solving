#include<bits/stdc++.h>
using namespace std;
int s,e,x,y,cnt=1,ans;
bool isbet(int a,int b,int c,int d){
if((s>=min(a,c))&&(s<=max(a,c))&&(e>=min(b,d))&&(e<=max(b,d))){
    return true;
}
else return false;
}
int main(){
cin>>s>>e;
for(;;){
    x+=cnt;

    bool s=isbet(x,y,x-cnt,y);
    if(s) {
            cout<<ans<<endl;
            break;
    }
    else{
        ans++;
        y+=cnt;
        s=isbet(x,y,x,y-cnt);
        if(s){
                cout<<ans<<endl;
                break;
        }
        else ans++;

        cnt*=-1;
        if(cnt<0)cnt+=-1;
        else cnt+=1;
    }
}
}
