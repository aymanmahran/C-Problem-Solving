#include<bits/stdc++.h>
using namespace std;
int main(){
long long h;
cin>>h;
long long cube[h];
for(int i=0;i<h;i++){
    cin>>cube[i];
}
sort(cube,cube+h);
for(int i=0;i<h;i++){
    cout<<cube[i]<<" ";
}
cout<<endl;
}
