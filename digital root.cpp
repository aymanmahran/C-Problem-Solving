#include<bits/stdc++.h>
using namespace std;
int x,y;
int main(){
cin>>x>>y;
if(y==0&&x>1)cout<<"No solution"<<endl;
else{
cout<<y;
for(int i=0;i<x-1;i++){
    cout<<"0";
}
cout<<endl;
}
}
