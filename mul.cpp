#include<bits/stdc++.h>
using namespace std;
string x,y,ne,fe,result,add,ze="";
int a,b,co;
stringstream c;
void addd(string d){
    while(result.size()<d.size()){
        result="0"+result;
    }
    while(d.size()<result.size()){
        d="0"+d;
    }
    co=0;
    fe="";

    for(int i=d.size()-1;i>=0;i--){
        b=(d[i]-48)+(result[i]-48);
            b+=co;
            c<<b;
            c>>add;
            c.clear();
            fe=add[add.size()-1]+fe;
            co=0;
            if(add.size()==2)co=add[0]-48;
    }
    if(co!=0){
            c<<co;
            c>>add;
            c.clear();
            fe=add+fe;
        }
    result=fe;
}
string mul(string m,string n){
    for(int i=n.size()-1;i>=0;i--){
        add="";
        ne="";
        co=0;
        for(int j=m.size()-1;j>=0;j--){
            b=(m[j]-48)*(n[i]-48);
            b+=co;
            c<<b;
            c>>add;
            c.clear();
            ne=add[add.size()-1]+ne;
            co=0;
            if(add.size()==2)co=add[0]-48;
        }
        if(co!=0){
            c<<co;
            c>>add;
            c.clear();
            ne=add+ne;
        }
        addd(ne+ze);
        ze+="0";
    }
    return result;
}
int main(){
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>x>>y;
        if(x.size()<y.size())swap(x,y);
        cout<<mul(x,y)<<endl;
        result="";
        ze="";
    }
}
