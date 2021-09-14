#include<bits/stdc++.h>
using namespace std;
string s,t,d;
int pos=-1,cnt;
int main(){
cin>>s>>t;
d=s;
for(int i=0;i<t.size();i++){
    for(int j=0;j<s.size();j++){
        if(t[i]==s[j]&&j>pos){
            cnt++;
            s[j]='?';
            pos=j;
            break;
        }
    }
}
if(cnt==t.size()&&s.size()>t.size()){
    cout<<"automaton"<<endl;
}
else{
    cnt=0;
    s=d;
for(int i=0;i<t.size();i++){
    for(int j=0;j<s.size();j++){
        if(t[i]==s[j]){
            cnt++;
            s[j]='?';
            break;
        }
    }
}
if(cnt==t.size()){
    if(s.size()==t.size()){
        cout<<"array"<<endl;
    }
    if(s.size()>t.size()){
        cout<<"both"<<endl;
    }
}
else{
    cout<<"need tree"<<endl;
}
}
}
