#include<bits/stdc++.h>
using namespace std;
stringstream c;
string d,s,v,h;
int arr[11],val[11],vale[11],cnt,ans,x,w=4,a=0,si,y;
void tot(int b,int cn,string z){
if(cn==b){
    c.clear();
    c<<z;
    c>>a;
    c.clear();
    if(a<x){
        ans++;
    }
    else if(a>x){
        return;
    }
    else if(a==x&&y==0){
        ans++;
        y=1;
    }
    a=0;
    return;
}
    char c=h[0];
    tot(b,cn+1,z+c);
    c=h[1];
    tot(b,cn+1,z+c);
}
int main(){
cin>>x;
c<<x;
c>>d;
if(d.size()<=2){
    cout<<d<<endl;
}
else{
        vale[2]=10;
        val[2]=2;
        arr[2]=10;
    for(int i=3;i<=10;i++){
            val[i]=w;
            w*=2;
            vale[i]=(val[i-1]*9)+vale[i-1];
            arr[i]=(vale[i-1]*9)+arr[i-1];
        }
    si=d.size();
    ans+=arr[si];
    ans+=((d[0]-'0'-1)*vale[si]);
    if(d[0]>=d[1]){
        ans+=((d[1]-'0')*val[si-1]);
    }
    else{
        ans+=((d[1]-'0'-1)*val[si-1]);
        ans+=vale[si-1];
    }
    v=d[0];
    v+=d[1];
    h[0]=min(d[1],d[0]);
    h[1]=max(d[0],d[1]);
    ans-=1;
    if(d[0]==d[1]){
        for(int i=0;i<=9;i++){
            h[0]=i+'0';
            tot(si,2,v);
        }
    }
    else{
    tot(si,2,v);
    }
    cout<<ans<<endl;
}
}
