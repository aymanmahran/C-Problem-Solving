#include<bits/stdc++.h>
using namespace std;
long long x,arr[200000],y,sf,ss,s[200000],f[200000],tf,ts,ind;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    y=arr[i];
    if(y<0){
        s[ss]=abs(y);
        ts+=s[ss];
        ss++;
    }
    if(y>0){
        f[sf]=y;
        sf++;
        tf+=y;
    }
}
if(tf>ts){
    cout<<"first"<<endl;
}
else if(ts>tf){
    cout<<"second"<<endl;
}
else if(tf==ts){
    for(int i=0;i<min(sf,ss);i++){
        if(f[i]!=s[i]){
            ind=i;
            break;
        }
    }
        if(f[ind]>s[ind]){
            cout<<"first"<<endl;
        }
        else if(s[ind]>f[ind]){
            cout<<"second"<<endl;
        }
        else if(s[ind]==f[ind]){
            if(arr[x-1]>0){
                cout<<"first"<<endl;
            }
            else{
                cout<<"second"<<endl;
            }
        }
}
}
