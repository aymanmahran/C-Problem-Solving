#include<bits/stdc++.h>
using namespace std;
string s,d;
bool  flag;
int main(){
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0'&&!flag){
            flag=true;
            continue;
        }
        d+=s[i];
    }
    if(s[s.size()-1]=='0'){
        if(flag)d+="0";
    }
    else{
        if(flag)d+="1";
    }
    cout<<d<<endl;
}
