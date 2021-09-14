#include<bits/stdc++.h>
using namespace std;
int main(){
int x,arf=0,cnt=0;
cin>>x;
string s;
for(int i=1;i<=x;i++){
if(x%i==0){
    ostringstream convert;
convert << i;
s = convert.str();

    for(int i=0;i<s.size();i++){
        if(s[i]=='7'||s[i]=='4'){
         arf++;
        }
    }

    if(arf==s.size()){
        cout<<"YES"<<endl;
        break;
    }
    else if(arf!=s.size()){
        arf=0;
        s.clear();
        cnt++;
    }


}
else if(x%i!=0){
    cnt++;
}
}
if(cnt==x){
    cout<<"NO"<<endl;
}
}
