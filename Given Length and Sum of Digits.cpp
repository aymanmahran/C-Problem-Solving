#include<bits/stdc++.h>
using namespace std;
int x,y,pl,no,sz;
string s,d;
int main(){
cin>>x>>y;
no=y;
if(y==0&&x>1){
    cout<<"-1 -1"<<endl;
    exit(0);
}
if(x==1&&y<=9){
    cout<<y<<" "<<y<<endl;
    exit(0);
}
else if(x==1&&y>9){
    cout<<"-1 -1"<<endl;
    exit(0);
}
if(y>=1&&y<10){
    pl=y-1;
}
else if(y>10){
    pl=9;
}
while(no>pl&&pl){
    no-=pl;
    s+=(pl+'0');
   // cout<<no<<" "<<pl<<" "<<s<<endl;
}
if(x-s.size()>1){
    s+=((no-1)+'0');
    //cout<<s<<endl;
    sz=s.size();
    for(int i=0;i<(x-sz)-1;i++){
        s+="0";
        //cout<<s<<endl;
    }
    s+="1";
    reverse(s.begin(),s.end());
}
else if(x-s.size()==1){
    s+=(no+'0');
    reverse(s.begin(),s.end());
    //cout<<s<<endl;
}
else{
    cout<<"-1 -1"<<endl;
    exit(0);
}
if(y<=9){
    d+=(y+'0');
    for(int i=0;i<x-1;i++){
        d+="0";
    }
    cout<<s<<" "<<d<<endl;
}
else{
    pl=9;
    while(y>9){
        y-=9;
        d+="9";
    }
    d+=(y+'0');
    if(d.size()<=x){
            sz=d.size();
        for(int i=0;i<x-sz;i++){
            d+="0";
        }
        cout<<s<<" "<<d<<endl;
    }
    else{
        cout<<"-1 -1"<<endl;
    }
}
}
