#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,x2,y2,sum,ans;
string s[51],f[51],v;
int main(){
cin>>a>>b;
for(int i=1;i<=a;i++){
    cin>>v;
    s[i]+=" ";
    s[i]+=v;
}
cin>>c>>d;
for(int i=1;i<=c;i++){
    cin>>v;
    f[i]+=" ";
    f[i]+=v;
}
for(int x=-(a+c);x<(a+c);x++){
    for(int y=-(b+d);y<(b+d);y++){
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                if(i+x>=1&&i+x<=c&&j+y>=1&&j+y<=d){
                    if(s[i][j]=='1'&&f[i+x][j+y]=='1'){
                        sum+=1;
                    }
                }
            }
        }
        if(sum>ans){
            ans=sum;
            x2=x;
            y2=y;
        }
        sum=0;
    }
}
cout<<x2<<" "<<y2<<endl;
}
