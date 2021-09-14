#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int h=max(a,b);
int u=(6-h)+1;
for(int i=6;i>=1;i--){
    if(u%i==0 &&6%i==0){
        cout<<u/i<<"/"<<6/i<<endl;
        break;
    }
}
}

