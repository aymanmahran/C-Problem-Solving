#include<bits/stdc++.h>
using namespace std;
int x,arr[731],m,d,p,t,ans;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int finday(int mo,int da){
    int day=0;
for(int i=0;i<mo;i++){
    day+=month[i];
}
day+=da;
return day;
}
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>x;
for(int i=0;i<x;i++){
    cin>>m>>d>>p>>t;
    m=finday(m,d);
    m+=365;
    for(int j=(m-t);j<m;j++){
        arr[j]+=p;
    }
}
for(int i=0;i<731;i++){
    ans=max(ans,arr[i]);
}
cout<<ans<<endl;
}
