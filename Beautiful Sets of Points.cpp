#include<bits/stdc++.h>
using namespace std;
int x,y;
int main(){
cin>>x>>y;
cout<<min(x+1,y+1)<<endl;
x=min(x,y);
for(int i=x,j=0;i>=0;i--,j++){
    cout<<i<<" "<<j<<endl;
}
}
