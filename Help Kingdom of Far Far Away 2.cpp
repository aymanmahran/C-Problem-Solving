#include<bits/stdc++.h>
using namespace std;
string s,a[2];
int cnt;
int main(){
cin>>s;
if(s[0]=='-'){
    cout<<"($";
    for(int i=1;i<s.size();i++){
        if(s[i]=='.'){
            cnt++;
        }
        else{
            a[cnt]+=s[i];
        }
    }
    if(a[0].size()<=3){
        cout<<a[0]<<".";
    }
    else{
    if((a[0].size()%3)==0){
        for(int i=0;i<a[0].size()-3;i+=3){
            cout<<a[0][i]<<a[0][i+1]<<a[0][i+2]<<",";
        }
    }
    else if((a[0].size()%3)==1){
        cout<<a[0][0]<<",";
        for(int i=1;i<a[0].size()-3;i+=3){
            cout<<a[0][i]<<a[0][i+1]<<a[0][i+2]<<",";
        }
    }
    else if((a[0].size()%3)==2){
        cout<<a[0][0]<<a[0][1]<<",";
        for(int i=2;i<a[0].size()-3;i+=3){
            cout<<a[0][i]<<a[0][i+1]<<a[0][i+2]<<",";
        }
    }
        cout<<a[0][a[0].size()-3]<<a[0][a[0].size()-2]<<a[0][a[0].size()-1]<<".";
    }
        if(a[1].size()==0){
            cout<<"00)"<<endl;
        }
        else if(a[1].size()==1){
            cout<<a[1][0]<<"0)"<<endl;
        }
        else{
        cout<<a[1][0]<<a[1][1]<<")"<<endl;
        }
}
else{
    cout<<"$";
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            cnt++;
        }
        else{
            a[cnt]+=s[i];
        }
    }
    if(a[0].size()<=3){
        cout<<a[0]<<".";
    }
    else{
    if((a[0].size()%3)==0){
        for(int i=0;i<a[0].size()-3;i+=3){
            cout<<a[0][i]<<a[0][i+1]<<a[0][i+2]<<",";
        }
    }
    else if((a[0].size()%3)==1){
        cout<<a[0][0]<<",";
        for(int i=1;i<a[0].size()-3;i+=3){
            cout<<a[0][i]<<a[0][i+1]<<a[0][i+2]<<",";
        }
    }
    else if((a[0].size()%3)==2){
        cout<<a[0][0]<<a[0][1]<<",";
        for(int i=2;i<a[0].size()-3;i+=3){
            cout<<a[0][i]<<a[0][i+1]<<a[0][i+2]<<",";
        }
    }
        cout<<a[0][a[0].size()-3]<<a[0][a[0].size()-2]<<a[0][a[0].size()-1]<<".";
    }
        if(a[1].size()==0){
            cout<<"00"<<endl;
        }
        else if(a[1].size()==1){
            cout<<a[1][0]<<"0"<<endl;
        }
        else{
        cout<<a[1][0]<<a[1][1]<<endl;
        }

}
}
