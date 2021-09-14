#include<bits/stdc++.h>
using namespace std;
int main(){
string x,y;
cin>>x>>y;
stringstream s;
s<<x;
long long n;
s>>n;
s.clear();
s<<y;
long long m;
s>>m;
s.clear();
long long h=m+n;
ostringstream convert;
convert << h;
string g=convert.str();
for(int i=0;i<x.size();i++){
    if(x[i]=='0'){
        x.erase(x.begin()+i);
        i--;
    }
}
for(int i=0;i<y.size();i++){
    if(y[i]=='0'){
        y.erase(y.begin()+i);
        i--;
    }
}
for(int i=0;i<g.size();i++){
    if(g[i]=='0'){
        g.erase(g.begin()+i);
        i--;
    }
}
s<<g;
long long o;
s>>o;
s.clear();

s<<x;
long long a;
s>>a;
s.clear();
s<<y;
long long b;
s>>b;
long long j=a+b;
if(o==j){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
