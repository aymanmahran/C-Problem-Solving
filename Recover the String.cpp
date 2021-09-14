#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d,x,y;
long long findnot(long long result){
    if(result==0)return 1;
    for(int i=0;i*i<=result;i++){
        if(i*(i+1)==result){
            return i+1;
        }
    }
    return -1;
}
int main(){
    cin>>a>>b>>c>>d;
    a*=2;
    d*=2;
    x=findnot(a);
    y=findnot(d);
    if(a==0&&d==0&&b==0&&c==0)cout<<"1"<<endl,exit(0);
    if(a==0&&b==0&&c==0)x=0;
    if(d==0&&c==0&&b==0)y=0;
    if(x==-1||y==-1||(x*y)!=b+c){
        cout<<"Impossible"<<endl;
        exit(0);
    }
    long long z=0;
    if(x)for(long long i=0;i<(x*y-b)/x;i++)cout<<"1",z++;
    if(x)for(long long i=0;i<(x-((x*y-b)%x));i++)cout<<"0";
    if(x)if((x*y-b)%x!=0)cout<<"1",z++;
    //cout<<x<<" "<<y<<endl;
    if(x)for(long long i=0;i<(x*y-b)%x;i++)cout<<"0";
    for(long long i=0;i<(y-z);i++)cout<<"1";
    cout<<endl;
}
