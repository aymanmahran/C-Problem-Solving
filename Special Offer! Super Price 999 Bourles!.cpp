#include<bits/stdc++.h>
using namespace std;
long long x,y,z,cnt,dnt;
string s,d;
stringstream c;
int main(){
cin>>x>>y;
c<<x;
c>>s;
c.clear();
c<<(x-y);
c>>d;
c.clear();
if(s.size()>d.size()){
    reverse(d.begin(),d.end());
    int g=d.size();
    for(int i=0;i<(s.size()-g);i++){
        d+="0";
    }
    reverse(d.begin(),d.end());
}
for(int i=s.size()-1;i>=0;i--){
    if(s[i]=='9')cnt++;
    else break;
}
for(int i=0;i<s.size()-1;i++){
    if(s[i]>d[i]){
        d[i]=s[i]-1;
        for(int j=i+1;j<d.size();j++){
            d[j]='9';
            dnt++;
        }
        if(dnt>cnt){
        c<<d;
        c>>x;
        cout<<x<<endl;
        exit(0);
        }
        else{
            cout<<s<<endl;
            exit(0);
        }
    }
    dnt=0;
}
cout<<s<<endl;
}
