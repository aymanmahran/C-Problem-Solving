#include<bits/stdc++.h>
using namespace std;
string s,z[13000],a,b,maxi;
stringstream c;
int x,d,m,y,cnt,v;
bool chm(int f,int t){
    if(t==1&&(f>=1&&f<=31))return true;
    if(t==2&&(f>=1&&f<=28))return true;
    if(t==3&&(f>=1&&f<=31))return true;
    if(t==4&&(f>=1&&f<=30))return true;
    if(t==5&&(f>=1&&f<=31))return true;
    if(t==6&&(f>=1&&f<=30))return true;
    if(t==7&&(f>=1&&f<=31))return true;
    if(t==8&&(f>=1&&f<=31))return true;
    if(t==9&&(f>=1&&f<=30))return true;
    if(t==10&&(f>=1&&f<=31))return true;
    if(t==11&&(f>=1&&f<=30))return true;
    if(t==12&&(f>=1&&f<=31))return true;
    else return false;
}
int main(){
cin>>s;
map<string,int>arr;
for(int i=2;i<s.size()-2;i++){
    if(s[i]=='-'){
        a=s[i-2];
        a+=s[i-1];
        b=s[i+1];
        b+=s[i+2];
        if(a.find("-")==EOF&&b.find("-")==EOF){
        c<<a;
        c>>d;
        c.clear();
        c<<b;
        c>>m;
        c.clear();
        if(chm(d,m)){
                if(s[i+3]=='-'){
                z[cnt]+=a;
                z[cnt]+='-';
                z[cnt]+=b;
                a.clear();
            for(int j=i+4;j<i+8;j++){
                a+=s[j];
            }
            if(a.find("-")==EOF){
            c<<a;
            c>>y;
            c.clear();
        if(y>=2013&&y<=2015){
            z[cnt]+='-';
            z[cnt]+=a;
            arr[z[cnt]]++;
            cnt++;
            a.clear();
        }
        else{
            z[cnt].clear();
        }
    }
    else{
        z[cnt].clear();
    }
}
        }
    }
}
}
for(int i=0;i<cnt;i++){
    if(arr[z[i]]>v){
        maxi=z[i];
        v=arr[z[i]];
    }
}
cout<<maxi<<endl;
}
