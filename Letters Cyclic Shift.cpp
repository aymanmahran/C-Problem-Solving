#include<bits/stdc++.h>
using namespace std;
string s;
bool flag;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]!='a'){
            s[i]--;
            flag=true;
        }
        else{
            if(flag)break;
        }
    }
    if(!flag)s[s.size()-1]='z';
    cout<<s<<endl;
}
