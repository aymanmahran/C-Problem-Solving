#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int x=s.find("AB");
int y=s.find("BA",x+2);
int z=s.find("BA");
int l=s.find("AB",z+2);
if(x!=-1&&y!=-1||z!=-1&&l!=-1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
