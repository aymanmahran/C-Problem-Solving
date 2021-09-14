#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
getline(cin,s);
for(int i=s.size()-1;i>=0;i--){
    int h=static_cast<int>(s[i]);
    if((h>=97&&h<=122)||(h>=65&&h<=90)){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            cout<<"YES"<<endl;
            break;
    }
    else{
        cout<<"NO"<<endl;
        break;
    }
    }
}
}
