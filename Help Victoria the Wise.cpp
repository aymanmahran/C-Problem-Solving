#include<bits/stdc++.h>
using namespace std;
string s,d,h;
int cnt=1;
char c[6][6],x;
map<string,bool> ch;
vector<int> ind;
void tot(string s){
    //cout<<s<<endl;
    if(ch[s])return;
    ch[s]=1;
    string a;
    c[0][2]=s[0];
    c[2][2]=s[1];
    c[1][0]=s[2];
    c[1][1]=s[3];
    c[1][2]=s[4];
    c[1][3]=s[5];
    c[3][2]=c[1][0];
    x=c[1][0];
    c[1][0]=c[1][1];
    c[1][1]=c[1][2];
    c[1][2]=c[1][3];
    c[1][3]=x;
    c[3][2]=c[1][0];
    a=c[0][2];
    a+=c[2][2];
    for(int k=0;k<4;k++)a+=c[1][k];
    tot(a);
    c[0][2]=s[0];
    c[2][2]=s[1];
    c[1][0]=s[2];
    c[1][1]=s[3];
    c[1][2]=s[4];
    c[1][3]=s[5];
    c[3][2]=c[1][0];
    x=c[0][2];
    c[0][2]=c[1][2];
    c[1][2]=c[2][2];
    c[2][2]=c[3][2];
    c[3][2]=x;
    c[1][0]=c[3][2];
    a=c[0][2];
    a+=c[2][2];
    for(int k=0;k<4;k++)a+=c[1][k];
    tot(a);
}
int main(){
    cin>>s;
    sort(s.begin(),s.end());
    h=s;
    tot(s);
    for(int i=0;i<6;i++)ind.push_back(i);
    s.clear();
    while(next_permutation(ind.begin(),ind.end())){
        s.clear();
        for(int i=0;i<6;i++){
            s+=h[ind[i]];
        }
        if(!ch[s]){
            cnt++;
            tot(s);
        }
    }
    cout<<cnt<<endl;
}
