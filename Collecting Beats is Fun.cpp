#include<bits/stdc++.h>
using namespace std;
int x;
map<char,int>arr;
char c;
bool flag=true;
int main(){
cin>>x;
for(int i=0;i<16;i++){
    cin>>c;
    if(c!='.'){
        arr[c-'0']+=1;
    }
}
for(int i=0;i<10;i++){
    if(arr[i]>(x*2)){
        flag=false;
    }
}
if(flag==false){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
