#include<bits/stdc++.h>
using namespace std;
int x,a,b,y,c,d,sum,o[6000],t[6000],bac;
int main(){
cin>>x>>a>>b>>y>>c>>d;
for(int i=0;i<a;i++){
    o[i]=1;
}
for(int i=0;i<d;i++){
    t[i]=1;
}
bac=x;
for(int i=0;i<(a+b);i++){
    if(o[i]&&t[i]){
        bac++;
        sum+=bac;
    }
    else if((!o[i]&&t[i])||(o[i]&&!t[i])){
        sum+=bac;
    }
    else if(!o[i]&&!t[i]){
        bac--;
        sum+=bac;
    }
}
sum-=y;
sum*=2;
sum+=y;
sum+=x;
cout<<sum<<endl;
}
