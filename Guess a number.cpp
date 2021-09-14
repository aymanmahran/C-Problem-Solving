#include<bits/stdc++.h>
using namespace std;
long long x,arr[10000],s=1e9,e=1e9;
char ans[10000];
string sign[10000];
int main(){
    s*=-2;
    e*=2;
cin>>x;
for(int i=0;i<x;i++){
    cin>>sign[i]>>arr[i]>>ans[i];
}
for(int i=0;i<x;i++){
    if(sign[i]=="<"&&ans[i]=='Y'){
        e=min(e,arr[i]-1);
    }
    else if(sign[i]=="<"&&ans[i]=='N'){
        s=max(s,arr[i]);
    }

    if(sign[i]==">"&&ans[i]=='Y'){
        s=max(s,arr[i]+1);
    }
    else if(sign[i]==">"&&ans[i]=='N'){
        e=min(e,arr[i]);
    }

    if(sign[i]=="<="&&ans[i]=='Y'){
        e=min(e,arr[i]);
    }
    else if(sign[i]=="<="&&ans[i]=='N'){
        s=max(s,arr[i]+1);
    }

    if(sign[i]==">="&&ans[i]=='Y'){
        s=max(s,arr[i]);
    }
    else if(sign[i]==">="&&ans[i]=='N'){
        e=min(e,arr[i]-1);
    }
}
for(long long i=s;i<=e;i++){
    cout<<i<<endl;
    exit(0);
}
cout<<"Impossible"<<endl;
}
