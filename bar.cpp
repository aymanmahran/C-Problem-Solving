#include<bits/stdc++.h>
using namespace std;
int x,cnt;
string s[100];
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>s[i];
}
for(int i=0;i<x;i++){
    if(s[i]=="ABSINTH"||s[i]== "BEER"||s[i]== "BRANDY"||s[i]== "CHAMPAGNE"||s[i]== "GIN"||s[i]== "RUM"||s[i]== "SAKE"||s[i]== "TEQUILA"||s[i]== "VODKA"||s[i]== "WHISKEY"||s[i]== "WINE"){
        cnt++;
    }
    else{
        int a=static_cast<int>(s[i][0]);
        if(a>=48&&a<=57){
            stringstream b;
            b<<s[i];
            int n;
            b>>n;
            if(n<18)cnt++;
        }
    }
}
cout<<cnt<<endl;
}
