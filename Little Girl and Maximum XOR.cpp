#include<bits/stdc++.h>
using namespace std;
long long a,b,w,p=1,ans;
string s,e;
string dtb(long long val){
    string ret="";
    while(val){
        if(val%2)ret="1"+ret;
        else ret="0"+ret;
        val/=2;
    }
    return ret;
}
int main(){
    cin>>a>>b;
    s=dtb(a);
    e=dtb(b);
    while(s.size()!=e.size()){
        s="0"+s;
    }
   // cout<<s<<" "<<e<<endl;
    w=s.size()-1;
    while(p<=(b-a)){
        //a+=p;
        //b-=p;
        ans+=p;
        p*=2;
        w--;
       // if(a+p>b-p)break;
    }
   // ans+=p;
   // cout<<s<<" "<<e<<" "<<p<<" "<<w<<" "<<ans<<endl;
    for(int i=w;i>=0;i--){
        if(s[i]!=e[i])ans+=p;
        p*=2;
    }
    cout<<ans<<endl;
}
