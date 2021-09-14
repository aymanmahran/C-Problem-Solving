#include<bits/stdc++.h>
using namespace std;
int x,y,z,a,b,c;
double ans=1e9,dis;
int main(){
    cin>>x>>y>>z;
    for(int i=0;i<z;i++){
        cin>>a>>b>>c;
        dis=(x-a)*(x-a)+(y-b)*(y-b);
        dis=sqrt(dis);
        dis/=(double)c;
        ans=min(ans,dis);
    }
    cout<<fixed<<setprecision(20)<<ans<<endl;
}
