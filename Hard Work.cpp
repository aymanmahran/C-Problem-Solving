#include<bits/stdc++.h>
using namespace std;
string a[3],s[1000],d;
int x,sz;
bool k,l,m;
string strings(string g){
    d.clear();
for(int j=0;j<g.size();j++){
        g[j]=tolower(g[j]);
        if(g[j]!='_'&&g[j]!='-'&&g[j]!=';'){
            d+=g[j];
        }
    }
return d;
}
bool re(string f,int in){
if(s[in].find(f)==EOF){
    return false;
}
else{
    int pos=s[in].find(f);
    for(int i=pos;i<(pos+f.size());i++){
        s[in][i]='?';
    }
    return true;
}
}
int main(){
cin>>a[0]>>a[1]>>a[2]>>x;
for(int i=0;i<x;i++){
    cin>>s[i];
}
for(int i=0;i<3;i++){
        a[i]=strings(a[i]);
        sz+=a[i].size();
}
for(int j=0;j<3;j++){
for(int i=1;i<3;i++){
    if(a[i].size()>a[i-1].size()){
        swap(a[i],a[i-1]);
    }
}
}
for(int i=0;i<x;i++){
    s[i]=strings(s[i]);
    if((s[i].size())==sz){
            k=re(a[0],i);
            l=re(a[1],i);
            m=re(a[2],i);
    if(k&&l&&m){
            cout<<"ACC"<<endl;
    }
        else{
            cout<<"WA"<<endl;
        }
    }
    else{
        cout<<"WA"<<endl;
    }
}
}
