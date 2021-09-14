#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int cap=0,sml=0;
cin>>s;
char c;
for(int i=0;i<s.size();i++){
     c=tolower(s[i]);
    if(c==s[i]){
        sml++;
    }
    else{
       cap++;
    }
}
if(sml>cap){
    for(int i=0;i<s.size();i++){
     c=tolower(s[i]);
     s[i]=c;
    }
    cout<<s<<endl;
}
else if(sml<cap){
    for(int i=0;i<s.size();i++){
     c=toupper(s[i]);
     s[i]=c;
    }
    cout<<s<<endl;
}
else if(sml==cap){
    for(int i=0;i<s.size();i++){
     c=tolower(s[i]);
     s[i]=c;
    }
    cout<<s<<endl;
}
}


