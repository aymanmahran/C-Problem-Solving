#include<bits/stdc++.h>
using namespace std;
string s;
int f,ss;
int main(){
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='4')f++;
    if(s[i]=='7')ss++;
}
if(f>ss)cout<<"4"<<endl;

if(f<ss)cout<<"7"<<endl;

if(f==ss){
    if(f==0)cout<<"-1"<<endl;
    else cout<<"4"<<endl;

}
}

