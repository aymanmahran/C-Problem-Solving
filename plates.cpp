#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,bowl,plate,vnt=0;
cin>>n>>bowl>>plate;
long long food[n];
for(long long i=0;i<n;i++){
    cin>>food[i];
}
for(long long i=0;i<n;i++){
    if(food[i]==1){
            if(bowl>0){
        bowl--;
            }
            else{
                vnt++;
            }
    }
    else{
        if(plate>0){
    plate--;
            }
    else if(plate==0&&bowl>0){
    bowl--;
    }
    else if(plate==0&&bowl==0){
        vnt++;
    }
    }
}
cout<<vnt<<endl;
}
