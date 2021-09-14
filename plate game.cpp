#include<bits/stdc++.h>
using namespace std;
int x,y,r;
int main(){
cin>>x>>y>>r;
r*=2;
if(min(x,y)<r)cout<<"Second"<<endl;
else cout<<"First"<<endl;
}
