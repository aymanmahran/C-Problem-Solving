#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,a=1;
cin>>x>>y;
string s,c,d;
for(int i=0;i<y-1;i++){
    s+=".";
}
s+="#";

c+="#";
for(int i=0;i<y-1;i++){
    c+=".";
}

for(int j=0;j<y;j++){
        d+="#";
    }

for(int i=0;i<(x-1)/2;i++){

    cout<<d<<endl;
    if(a==1){
        cout<<s<<endl;
    }
    if(a==-1){
        cout<<c<<endl;
    }
    a*=-1;
}
cout<<d<<endl;
}
