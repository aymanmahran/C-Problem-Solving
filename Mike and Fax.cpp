#include<bits/stdc++.h>
using namespace std;
string s,d,e;
int x,l;
int main(){
cin>>s>>x;
if(s.size()%x==0){
    l=s.size();
    l/=x;
    for(int i=0;i<s.size();i++){
        d+=s[i];
        if(d.size()==l){
           e=d;
           reverse(d.begin(),d.end());
           if(e!=d){
            cout<<"NO"<<endl;
            exit(0);
           }
           d.clear();
        }
    }
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
