#include<bits/stdc++.h>
using namespace std;
long long a,b,c,cnt=1,n=0;
int main(){
cin>>a>>b>>c;
while((b*cnt)<=c){
    int mul=b*cnt;
    int x=mul-a;
    cnt++;
    if(x>0){
    cout<<x<<" ";
    n++;
    }
}
if(n==0)cout<<"-1";

cout<<endl;
}
