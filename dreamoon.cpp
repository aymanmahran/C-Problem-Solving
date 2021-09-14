#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,p=0,r=0,sum=0;
cin>>x>>y;
p=x/2;
r=x-(p*2);
sum=p+r;
if(x<y){
    cout<<"-1"<<endl;
}
else if(x>=y){
if(sum%y==0){
    cout<<sum<<endl;
}
else if(sum%y!=0){
    while(sum%y!=0){
        sum-=1;
        sum+=2;
    }
    cout<<sum<<endl;
}
}
}
