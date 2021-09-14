#include<bits/stdc++.h>
using namespace std;
string s,arr[101],fn,sn,d,ss[101];
int x,st,ac,aa[101],cnt,z;
set<string>na;
set<string>::iterator it;
map<string,int>sco;
int main(){
cin>>s>>x;
for(int i=0;i<=x;i++){
    getline(cin,arr[i]);
}
for(int i=0;i<=x;i++){
        d.clear();
        st=0;
        fn.clear();
        sn.clear();
    for(int j=0;j<arr[i].size();j++){
        if(arr[i][j]==' '){
            fn=d;
            st=j+1;
            break;
        }
        else{
            d+=arr[i][j];
        }
    }
    d.clear();
    if(arr[i][st]=='p'){
        ac=15;
        st+=10;
    }
    else if(arr[i][st]=='c'){
        ac=10;
        st+=13;
    }
    else if(arr[i][st]=='l'){
        ac=5;
        st+=6;
    }
    for(int k=st;k<arr[i].size();k++){
        if(arr[i][k]==39){
            sn=d;
            break;
        }
        else{
            d+=arr[i][k];
        }
    }
    if(fn!=s&&sn==s){
    na.insert(fn);
    sco[fn]+=ac;
    }
    else if(sn!=s&&fn==s){
    na.insert(sn);
    sco[sn]+=ac;
    }
    else if(fn!=s&&sn!=s){
        na.insert(fn);
        na.insert(sn);
    }
   // cout<<fn<<"   "<<sn<<endl;
}
for(it=na.begin();it!=na.end();it++){
    if(z>0){
            if((*it)!=s){
    aa[cnt]=sco[(*it)];
    ss[cnt]=(*it);
    cnt++;
    //cout<<aa[cnt-1]<<" "<<ss[cnt-1]<<endl;
    }
    }
    z++;
}
sort(aa,aa+cnt,greater<int>());
sort(ss,ss+cnt);
for(int i=0;i<cnt;i++){
        //cout<<aa[i]<<endl;
    for(int j=0;j<cnt;j++){
        if(sco[ss[j]]==aa[i]&&ss[j]!=s){
            cout<<ss[j]<<endl;
            sco[ss[j]]=-1;
          //  ss[j]="?";
            break;
        }
    }
}
}
