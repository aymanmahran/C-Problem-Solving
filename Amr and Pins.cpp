#include<bits/stdc++.h>
using namespace std;
double n,x,y,z,c,a,b,dist;
int main(){
cin>>n>>x>>y>>a>>b;
n*=2;
n*=n;
z=abs(x-a);
c=abs(y-b);
z*=z;
c*=c;
dist=z+c;
cout<<ceil(sqrt((dist/n)))<<endl;
}
