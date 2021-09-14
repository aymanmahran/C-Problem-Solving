#include<bits/stdc++.h>
using namespace std;
long long x,y,cnt;
long long power(long long p){
long long ans=1;
for(int i=0;i<p;i++){
ans*=2;
}
return ans;
}
int main(){
cin>>x;
while(x){
y=log2(x);
x-=power(y);
cnt++;
}
cout<<cnt<<endl;
}
