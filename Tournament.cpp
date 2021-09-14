#include<bits/stdc++.h>
using namespace std;
int x,f[100000],s[100000],pl[51],a,b,w[51],l[51];
int main(){
cin>>x;
for(int i=0;i<(x*(x-1)/2)-1;i++){
    cin>>f[i]>>s[i];
    pl[f[i]]++;
    pl[s[i]]++;
}
for(int i=1;i<=x;i++){
    if(pl[i]<(x-1)){
        a=i;
        swap(a,b);
    }
}
for(int i=0;i<(x*(x-1)/2)-1;i++){
    if(f[i]==a){
        w[s[i]]=1;
    }
    else if(s[i]==a){
        w[f[i]]=-1;
    }
}
for(int i=0;i<(x*(x-1)/2)-1;i++){
    if(f[i]==b){
        l[s[i]]=1;
    }
    else if(s[i]==b){
        l[f[i]]=-1;
    }
}
for(int i=1;i<=x;i++){
    if(w[i]==-1&&l[i]==1){
        cout<<b<<" "<<a<<endl;
        exit(0);
    }
    else if(w[i]==1&&l[i]==-1){
        cout<<a<<" "<<b<<endl;
        exit(0);
    }
}
cout<<a<<" "<<b<<endl;
}
