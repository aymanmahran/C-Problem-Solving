#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,cnt=0,dnt=0;
cin>>x>>y;
string s[x];
for(int i=0;i<x;i++){
    cin>>s[i];
    for(int j=0;j<s[i].size();j++){
        if(s[i][j]=='4'||s[i][j]=='7'){
            cnt++;
        }
    }
    if(cnt<=y){
        dnt++;
    }
    cnt=0;
}
cout<<dnt<<endl;
}
