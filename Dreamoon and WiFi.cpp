#include<bits/stdc++.h>
using namespace std;
string a,b;
int sum,s=1;
long double cnt,all;
void fb(int ans,int ind){
if(ind==b.size()){
    if(ans==sum)all++;
    return;
}
if(b[ind]=='?'){
    fb(ans+1,ind+1);
    fb(ans-1,ind+1);
}
else if(b[ind]=='-'){
    fb(ans-1,ind+1);
}
else if(b[ind]=='+'){
    fb(ans+1,ind+1);
}
return;
}
int main(){
cin>>a>>b;
for(int i=0;i<a.size();i++){
    if(a[i]=='+')sum++;
    else sum--;
}
for(int i=0;i<b.size();i++){
    if(b[i]=='?')cnt++;
}
fb(0,0);
for(int i=0;i<cnt;i++){
    s*=2;
}
cout<<fixed<<setprecision(12)<<all/s<<endl;
}
