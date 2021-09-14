#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s>>t;
int cnt=1,y=0;
for(int i=0;i<t.size();i++){
    if(t[i]==s[y]){
        cnt++;
        y++;
    }
}
cout<<cnt<<endl;
}
