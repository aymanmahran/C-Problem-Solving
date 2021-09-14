#include<bits/stdc++.h>
using namespace std;
int x;
string s[1001];
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>s[i];
    }
    for(int i=0;i<x;i++){
        if(s[i][0]=='O'&&s[i][1]=='O'){
            s[i][0]='+';
            s[i][1]='+';
            cout<<"YES"<<endl;
            for(int k=0;k<x;k++)cout<<s[k]<<endl;
            exit(0);
        }
        else if(s[i][3]=='O'&&s[i][4]=='O'){
            s[i][3]='+';
            s[i][4]='+';
            cout<<"YES"<<endl;
            for(int k=0;k<x;k++)cout<<s[k]<<endl;
            exit(0);
        }
    }
    cout<<"NO"<<endl;
}
