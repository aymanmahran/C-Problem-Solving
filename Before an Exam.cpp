#include<bits/stdc++.h>
using namespace std;
int x,y,mini[30],maxi[30],sum,dif;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>mini[i]>>maxi[i];
    maxi[i]=maxi[i]-mini[i];
    sum+=mini[i];
}
if(sum>y){
    cout<<"NO"<<endl;
}
else if(sum==y){
    cout<<"YES"<<endl;
    for(int i=0;i<x;i++){
        cout<<mini[i]<<" ";
    }
    cout<<endl;
}
else{
    dif=y-sum;
    for(int i=0;i<x;i++){
        if(dif>=maxi[i]){
            dif-=maxi[i];
            mini[i]+=maxi[i];
        }
        else{
            mini[i]+=dif;
            dif=0;
        }
    }
    if(dif==0){
        cout<<"YES"<<endl;
    for(int i=0;i<x;i++){
        cout<<mini[i]<<" ";
    }
    cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
