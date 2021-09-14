#include<bits/stdc++.h>
using namespace std;
long long x,y,r,c,sum,a,b,n[100001],m[100001];
int main(){
    cin>>x>>y;
    sum=x*x;
    for(int i=0;i<y;i++){
        cin>>a>>b;
        if(!n[a])r++;
        if(!m[b])c++;
        n[a]=1;
        m[b]=1;
        cout<<(x*x)-((x*r+x*c)-(r*c))<<endl;
    }
}
