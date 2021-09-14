#include<bits/stdc++.h>
using namespace std;
int x,y,z;
char a='0',b='1',d;
string s;
void yes(char c){
    if(c=='0'){
        d='1';
        z=x+y;
    }
    else{
        d='0';
        z=x+1;
        z+=x;
    }
    for(int i=0;i<z;i++){
        s+=c;
        swap(c,d);
    }
    if(x>=y)cout<<s<<endl;

    else{
        y-=(x+1);
        //cout<<s<<endl;
        for(int i=0;i<z;i++){
            if(y&&!(i%2)){
                cout<<"1";
                y--;
            }
            cout<<s[i];
        }
        cout<<endl;
    }
}
int main(){
cin>>x>>y;
if(x-y>=0){
    if(x-y==0||x-y==1){
        yes(a);
    }
    else{
        cout<<"-1"<<endl;
    }
}
else{
    if((y>=0)&&(y<=((x+1)*2))){
        yes(b);
    }
    else{
        cout<<"-1"<<endl;
    }
}
}
