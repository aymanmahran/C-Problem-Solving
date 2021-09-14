#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,ant=0;
cin>>x>>y;
int score[x];
for(int i=0;i<x;i++){
    cin>>score[i];
}
for(int i=0;i<x;i++){
    if(score[i]>=score[y-1]&&score[i]>0){
        ant++;
    }
}
cout<<ant<<endl;
}
