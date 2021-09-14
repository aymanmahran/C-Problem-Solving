#include<bits/stdc++.h>
using namespace std;
int main(){
string s[8];
int sum=0;
for(int i=0;i<8;i++){
    cin>>s[i];
    for(int v=0;v<8;v++){
    if(s[i][v]=='B'){
        sum++;
    }
    }
}
if(sum==64){
    cout<<"8"<<endl;
}
else{
int cnt=0,dnt=0;
for(int i=0;i<8;i++){
    for(int v=0;v<8;v++){
        if(s[v][i]=='B'){
            cnt++;
        }
        if(cnt==8){
            dnt++;
        }
    }
    cnt=0;
}
for(int i=0;i<8;i++){
    for(int v=0;v<8;v++){
        if(s[i][v]=='B'){
            cnt++;
        }
        if(cnt==8){
            dnt++;
        }
    }
    cnt=0;
}
cout<<dnt<<endl;
}
}
