#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int a,b,c,color[x];
for(int i=0;i<x;i++){
        cin>>a>>b>>c;
    for(int v=0;v<a;v++){
        cin>>color[v];
    }
    if(color[0]==b&&color[a-1]==c){
        cout<<"BOTH"<<endl;
    }
    else if(color[0]==b&&color[a-1]!=c){
        cout<<"EASY"<<endl;
    }
    else if(color[0]!=b&&color[a-1]==c){
            cout<<"HARD"<<endl;
    }
    else if(color[0]!=b&&color[a-1]!=c){
        cout<<"OKAY"<<endl;
    }
}
}
