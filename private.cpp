#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y=0;
cin>>x;
string s[x];
int cnt[2]={0};
for(int i=0;i<x;i++){
    cin>>s[i];
}
for(int i=0;i<x;i++){
    for(int j=0;j<s[i].size();j++){
            if(s[i][j]!='.'){
        char c=tolower(s[i][j]);
        int x=static_cast<int>(c);
        x-=96;
        cnt[y]+=x;
            }
            if(s[i][j]=='.'){
                y++;
            }
    }

    if(cnt[0]!=cnt[1]){
        cout<<s[i]<<endl;
    }
     y=0;
    cnt[0]=0;
    cnt[1]=0;
}
}
