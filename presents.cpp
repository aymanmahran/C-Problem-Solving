#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int present[x+1],answer[x];
    for(int i=1;i<x+1;i++){
        cin>>present[i];
    }
    for(int i=0;i<x+1;i++){
        answer[i]=0;
    }
    for(int i=1;i<x+1;i++){
answer[present[i]]=i;
    }
    for(int i=1;i<x+1;i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
}
