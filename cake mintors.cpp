#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,cnt=0;
cin>>x>>y;
string s[x];
for(int i=0;i<x;i++){
    cin>>s[i];
}
for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
        if(s[j][i]=='.'){
              cnt++;
        }
    }
    if(cnt==x){
        for(int j=0;j<x;j++){
            s[j][i]='A';
        }
    }
    cnt=0;
}
cnt=0;
for(int i=0;i<x;i++){
    if(s[i].find("S")==EOF){
            s[i].clear();
            for(int j=0;j<y;j++){
                s[i]+="A";
            }
    }
}
for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
             if(s[i][j]=='A'){
                cnt++;
             }
}
}
cout<<cnt<<endl;
}
