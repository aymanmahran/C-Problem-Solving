#include<bits/stdc++.h>
using namespace std;
long long a,b,c,x[100],y[100],z,cnt;
bool state[100];
bool ifpas(long long st,long long en){
    state[st]=true;
    if(st==en)return 1;
    for(int i=0;i<=cnt;i++){
        if(((x[i]<x[st]&&x[st]<y[i])||(x[i]<y[st]&&y[st]<y[i]))&&state[i]==false){
             if(ifpas(i,en))return 1;
        }
    }
    return 0;
}
int main(){
cin>>z;
for(int i=0;i<z;i++){
        cin>>a;
    if(a==1){
        cin>>b>>c;
        x[cnt]=b;
        y[cnt]=c;
        cnt++;
    }
    else{
            cin>>b>>c;
            for(int i=0;i<=cnt;i++){
                state[i]=0;
            }
        bool s=ifpas(b-1,c-1);
    if(s)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}
}
