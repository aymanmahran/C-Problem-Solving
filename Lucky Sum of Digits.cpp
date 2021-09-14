#include<bits/stdc++.h>
using namespace std;
int x,y,a[2],z,c[2]={4,7};
int main(){
cin>>x;
a[0]=x/4;
y=x-(a[0]*4);
z=a[0];
for(int i=0;i<z;i++){
    y+=4;
    if(y%7==0){
        a[1]+=(y/7);
        a[0]-=(y/4);
        y=0;
    }
}
if((a[0]*4)+(a[1]*7)==x){
for(int i=0;i<2;i++){
    for(int j=0;j<a[i];j++){
        cout<<c[i];
    }
  }
}
else{
    cout<<"-1";
}
cout<<endl;
}
