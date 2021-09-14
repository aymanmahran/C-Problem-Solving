#include<bits/stdc++.h>
using namespace std;
int main(){
long long u,wallet[3],mnt=0;
cin>>u;
long long ticket[u];
for(long long i=0;i<3;i++){
    wallet[i]=0;
}
for(long long i=0;i<u;i++){
    cin>>ticket[i];
}
if(ticket[0]>25){
    cout<<"NO"<<endl;
}
else{
for(long long i=0;i<u;i++){
    if(ticket[i]==25){
        wallet[0]+=25;
    }
    else if(ticket[i]==50){
            if(wallet[0]>=25){
        wallet[0]-=25;
        wallet[1]+=50;
            }
            else{
                mnt++;
                i=u;
            }
    }
    else if(ticket[i]==100){

            if(wallet[0]>=75&&wallet[1]==0){
                wallet[0]-=75;
                wallet[2]+=100;
            }
            if(wallet[1]>=50&&wallet[0]>=25){
                wallet[0]-=25;
                wallet[1]-=50;
                wallet[2]+=100;
            }


        else{
                mnt++;
            i=u;
        }
    }
}
if(mnt==0){
    cout<<"YES";
}
else{
    cout<<"NO";
}
cout<<endl;
}
}
