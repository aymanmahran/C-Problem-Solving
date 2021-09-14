#include<bits/stdc++.h>
using namespace std;
int x,y;
char c;
int main()
{
    cin>>x>>c>>y;
    int h=y;
    for(int i=h;i<1440;i++){
            y++;
        if(y==60){
            y=0;
            x++;
        }
        if(x==24){
            cout<<"00:00"<<endl;
        exit(0);
        }
        stringstream s;
        s<<x;
        string a;
        s>>a;
        s.clear();
        s<<y;
        string j;
        s>>j;
        if(y<10){
        j+="0";
        reverse(j.begin(),j.end());
        }
        if(x<10){
        a+="0";
        reverse(a.begin(),a.end());
        }
        reverse(j.begin(),j.end());
            if(a==j){
            reverse(j.begin(),j.end());
            cout<<a<<":"<<j<<endl;
            break;
        }
    }
}
