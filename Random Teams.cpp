#include<bits/stdc++.h>
using namespace std;
long long x,y,a,b,z,c,cnt;
int main(){
cin>>x>>y;
a=x;
b=y;
c=a%b;
a-=c;
a/=b;
z=a;
b-=c;
a-=1;
a=((a*(a+1))/2)*b;
cnt+=a;
z=((z*(z+1))/2)*c;
cnt+=z;
cout<<cnt<<" ";
cout<<((x-y)*((x-y)+1))/2<<endl;
}
