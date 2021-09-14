#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int akshat=0,malvika=1;
int mini=min(x,y);
while(mini!=0){
    swap(akshat,malvika);
  mini--;
}
if(akshat==0){
    cout<<"Malvika"<<endl;
}
else{
    cout<<"Akshat"<<endl;
}
}
