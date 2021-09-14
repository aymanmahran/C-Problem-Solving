#include<bits/stdc++.h>
using namespace std;
int main(){
int x,n=0;
cin>>x;
n=x/2;
string s[x];
int a=0,b=x,cnt=0;
for(int i=0;i<x;i++){
    cin>>s[i];
}
if(s[0][0]==s[0][1]){
    cout<<"NO"<<endl;
}
else{
char w=s[0][0];
for(int i=0;i<x;i++){
        if(s[i][b-1]==w){
            s[i][b-1]=s[0][1];
        }
        else{
            s[i][b-1]='?';
        }
b--;
}

for(int i=0;i<x;i++){
        if(i!=n){
    if(s[i][a]==w){
            s[i][a]=s[0][1];
        }
        else{
            s[i][a]='?';
        }
        }
        else if(i==n){
            if(s[i][a]==s[0][1]){
                s[i][a]==s[0][1];
            }
        }
a++;
}

for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        if(s[i][j]==s[0][1]){
            cnt++;
        }
    }
}
if(cnt==x*x){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
}
