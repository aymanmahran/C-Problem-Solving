#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
long long y=0;

for(long long i=0;i<s.size();i++){
    if(s[i]=='4'||s[i]=='7'){
        y++;
    }
}
if(y==4||y==7){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}

