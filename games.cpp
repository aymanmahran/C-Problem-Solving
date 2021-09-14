#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int home[x],guest[x],answer=0;
for(int i=0;i<x;i++){
    cin>>home[i]>>guest[i];
}
for(int i=0;i<x;i++){
        for(int v=0;v<x;v++){
    if(home[i]==guest[v]){
        answer++;
    }
        }
}
cout<<answer<<endl;
}
