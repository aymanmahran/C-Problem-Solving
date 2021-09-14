#include<bits/stdc++.h>
using namespace std;
int main(){
string x,y,z;
cin>>x>>y;
int u=x.size()-1;
for(int i=0;i<x.size()/2;i++){
    swap(x[i],x[u]);
    u--;
}
if(x==y){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
