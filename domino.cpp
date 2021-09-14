#include<bits/stdc++.h>
using namespace std;
int main(){
int x,up=0,low=0,cnt=0,dnt=0;
cin>>x;
int upper[x],lower[x];
for(int i=0;i<x;i++){
    cin>>upper[i]>>lower[i];
    up+=upper[i];
    low+=lower[i];
}
 if(up%2==0&&low%2==0){
        cout<<"0"<<endl;
    }
    else{
for(int i=0;i<x;i++){
            up-=upper[i];
            low-=lower[i];
            swap(upper[i],lower[i]);
            up+=upper[i];
            low+=lower[i];
            if(up%2==0&&low%2==0){
                cnt++;
            cout<<cnt<<endl;
            break;
            }
            else{
            up-=upper[i];
            low-=lower[i];
            swap(upper[i],lower[i]);
            up+=upper[i];
            low+=lower[i];
            dnt++;
            }
}
    }
if(dnt==x){
    cout<<"-1"<<endl;
}
}
