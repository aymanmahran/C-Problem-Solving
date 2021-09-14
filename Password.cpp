#include<bits/stdc++.h>
using namespace std;
string s,d;
int arr[1000001],a,b,cnt,m[1000001];
void lps(){
    int len=0;
    int i=1;
    while(i<a){
        if(s[i]==s[len]){
            len++;
            arr[i]=len;
            if(i!=a-1)m[len]=1;
            i++;
        }
        else{
            if(len!=0)len=arr[len-1];
            else{
                arr[i]=0;
                m[0]=1;
                i++;
            }
        }
    }
}
void cpy(int c){
    for(int i=0;i<c;i++){
        d+=s[i];
    }
}
int main(){
    cin>>s;
    a=s.size();
    lps();
    b=arr[a-1];
    while(b){
        if(m[b]){
            cpy(b);
            cout<<d<<endl;
            exit(0);
        }
        b=arr[b-1];
    }
    cout<<"Just a legend"<<endl;
}
