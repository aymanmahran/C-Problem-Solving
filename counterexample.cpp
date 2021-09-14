#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,y;
cin>>x>>y;
if(x%2==1){
    x++;
}
if(y-x<2){
    cout<<"-1"<<endl;
}
else{
    cout<<x<<" "<<x+1<<" "<<x+2<<endl;
}
}
