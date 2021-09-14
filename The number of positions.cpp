#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b;
cin>>n>>a>>b;
int x=b+1;
int y=n-a;
if(x<=y){
    cout<<x<<endl;
}
else if(y<x){
    cout<<y<<endl;
}
}
