#include<bits/stdc++.h>
using namespace std;
long long l1,l2;
int main(){
string s;
cin>>s;
long long d1=s.find("^");
long long dis=d1;
for(int i=0;i<d1;i++){
    int a=static_cast<int>(s[i]);
    if(a>=48&&a<=57){
        l1+=(a-48)*dis;
    }
    dis--;
}
dis=1;
for(int i=d1+1;i<s.size();i++){
    int a=static_cast<int>(s[i]);
    if(a>=48&&a<=57){
        l2+=(a-48)*dis;
    }
    dis++;
}
if(l1==l2)cout<<"balance"<<endl;
else if(l1>l2)cout<<"left"<<endl;
else if(l1<l2)cout<<"right"<<endl;
}
