#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,one=0,two=0,draw=0;
cin>>x>>y;
for(int i=1;i<=6;i++){
if(fabs(x-i)<fabs(y-i)){
    one++;
}
else if(fabs(x-i)>fabs(y-i)){
    two++;
}
else {
    draw++;
}
}
cout<<one<<" "<<draw<<" "<<two<<endl;
}
