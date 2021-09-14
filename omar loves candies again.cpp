#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
string s[x],d[x];
int ans[x];
for(int i=0;i<x;i++){
    cin>>s[i];
    d[i]=0;
    ans[i]=0;
    for(int j=0;j<X;j++){
        if(i!=j){
            if(s[i][j]==s[i][j]){
                ans[i]++;
                d[i]+=s[i][j];
            }
        }
    }
}
}
