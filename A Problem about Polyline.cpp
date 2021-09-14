#include<bits/stdc++.h>
using namespace std;
double x,y,z,s,e,mid,ans=2,d,cnt;
int main(){
cin>>x>>y;
if(y>x){
    cout<<"-1"<<endl;
}
else{
    s=y;
    e=x+y;
    while(s<e){
        mid=s+(e-s)/2;
        z=x/mid;
      //  cout<<fixed<<setprecision(15)<<mid<<" ";
      //  cout<<z<<" ";
        d=ceil(z);
    //    cout<<d<<" ";
        int c=z;
      //  cout<<c<<" ";
        z-=c;
      //  cout<<z<<endl;
        z*=mid;
        c=d;
     //   cout<<mid<<" "<<z<<" "<<c<<endl;
        if(c%2==0&&z)z=mid-z;
        cout<<fixed<<setprecision(20)<<z<<" "<<mid<<endl;
        if(y==z){
          //  cout<<fixed<<setprecision(15)<<mid<<endl;
            ans=min(ans,mid);
            e=mid;
           // cout<<cnt<<endl;
        }
        else{
            e=mid;
        }
        cnt++;
    }
    cout<<ans<<endl;
}
}
