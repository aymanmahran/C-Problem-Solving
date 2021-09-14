#include<bits/stdc++.h>
using namespace std;
long long x,y,cnt;
int main(){
cin>>x>>y;
for(int i=1;i<=x;i++){
    if((y%i)==0&&(y/i)<=x){
        cnt++;
    }
}
cout<<cnt<<endl;
}
