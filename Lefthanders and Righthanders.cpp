#include<bits/stdc++.h>
using namespace std;
int x;
string s;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>x>>s;
for(int i=0;i<x/2;i++){
    if(s[i]=='L'&&s[i+(x/2)]=='R')cout<<i+1<<" "<<i+(x/2)+1;
    if(s[i]=='L'&&s[i+(x/2)]=='L')cout<<i+1<<" "<<i+(x/2)+1;
    if(s[i]=='R'&&s[i+(x/2)]=='L')cout<<i+(x/2)+1<<" "<<i+1;
    if(s[i]=='R'&&s[i+(x/2)]=='R')cout<<i+1<<" "<<i+(x/2)+1;

    cout<<endl;
}
}
