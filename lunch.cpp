#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,y;
cin>>x>>y;
long long joy[x],time[x];
for(long long i=0;i<x;i++){
    cin>>joy[i]>>time[i];
}
for(long long i=0;i<x;i++){
    if(time[i]>y){
        joy[i]=joy[i]-(time[i]-y);
    }
    else{
        joy[i]=joy[i];
    }
}
sort(joy,joy+x,greater<long long>());
cout<<joy[0]<<endl;
}
