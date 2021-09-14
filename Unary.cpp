#include<bits/stdc++.h>
using namespace std;
string s,d;
 long double arr[400],cnt=1,f,e;
void tobinary(int a){
    for(int i=0;i<a;i++){
if(d[i]=='0')arr[i]=0;
    }
    return;
}
long double x;
int main(){
cin>>s;
for(int i=0;i<400;i++){
    arr[i]=cnt;
    cnt*=2;
}
for(int i=0;i<s.size();i++){
    if(s[i]=='>')d+="1000";
    if(s[i]=='<')d+="1001";
    if(s[i]=='+')d+="1010";
    if(s[i]=='-')d+="1011";
    if(s[i]=='.')d+="1100";
    if(s[i]==',')d+="1101";
    if(s[i]=='[')d+="1110";
    if(s[i]==']')d+="1111";
}
reverse(d.begin(),d.end());
tobinary(d.size());
    f=fmod(arr[0],1000003);
for(int i=1;i<d.size();i++){
    e=fmod(arr[i],1000003);
    e+=f;
    e=fmod(e,1000003);
    f=e;

}
cout<<f<<endl;
}
