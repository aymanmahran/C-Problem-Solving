#include<bits/stdc++.h>
using namespace std;
int a,b,x,y,xx,yy;
int main(){
cin>>a>>b>>x>>y>>xx>>yy;
if((max(y,yy)<=b)&&(x+xx<=a)){
cout<<"YES"<<endl;
}
else if((max(x,yy)<=b)&&(xx+y<=a)){
cout<<"YES"<<endl;
}
else if((max(y,xx)<=b)&&(x+yy<=a)){
cout<<"YES"<<endl;
}
else if((max(y,yy)<=a)&&(x+xx)<=b){
cout<<"YES"<<endl;
}
else if((max(x,xx)<=a)&&(y+yy<=b)){
cout<<"YES"<<endl;
}
else if((max(y,xx)<=a)&&(yy+x<=b)){
cout<<"YES"<<endl;
}
else if((max(x,yy)<=a)&&(y+xx<=b)){
cout<<"YES"<<endl;
}
else if((max(x,xx)<=b)&&(y+yy)<=a){
cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
