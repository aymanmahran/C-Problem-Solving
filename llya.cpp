#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,last=0,prelast=0,r=0;
string a;
cin>>x;
if(x>=0){
    cout<<x<<endl;
}
else if(x<0){
ostringstream convert;
convert << x;
a = convert.str();
last=a[a.size()-1]-'0';
prelast=a[a.size()-2]-'0';
if(last>prelast){
    a.erase(a.begin()+a.size()-1);
    if(a=="-0"){
        cout<<"0"<<endl;
    }
    else{
    cout<<a<<endl;
}
}
else if(prelast>=last){
    a.erase(a.begin()+(a.size()-2));
    if(a=="-0"){
        cout<<"0"<<endl;
    }
    else{
    cout<<a<<endl;
}
}
}
}
