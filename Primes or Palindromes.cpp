#include<bits/stdc++.h>
using namespace std;
long double x,y;
int cnt,dnt,ans=-1;
bool flag;
stringstream c;
string s,d;
int main(){
cin>>x>>y;
x/=y;
for(int i=1;i<1500001;i++){
        flag=false;
    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            flag=true;
            break;
        }
    }
    if(!flag&&i!=1)cnt++;

    c<<i;
    c>>s;
    d=s;
    c.clear();
    reverse(s.begin(),s.end());
    if(s==d)dnt++;

    if(cnt<=(dnt*x)){
        ans=i;
    }
}
if(ans==-1){
cout<<"Palindromic tree is better than splay tree"<<endl;
}
else{
    cout<<ans<<endl;
}
}
