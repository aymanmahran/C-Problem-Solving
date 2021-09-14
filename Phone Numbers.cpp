#include<bits/stdc++.h>
using namespace std;
int x,maxi=-1;
string s;
struct det{
string name;
int numbers=0;
int taxi=0;
int pizza=0;
int girl=0;
};
int main(){
cin>>x;
det boy[100];
for(int i=0;i<x;i++){
    cin>>boy[i].numbers>>boy[i].name;
    for(int j=0;j<boy[i].numbers;j++){
        cin>>s;
        if(s[0]==s[1]&&s[1]==s[3]&&s[3]==s[4]&&s[4]==s[6]&&s[6]==s[7]){
            boy[i].taxi++;
        }
        else if(s[0]>s[1]&&s[1]>s[3]&&s[3]>s[4]&&s[4]>s[6]&&s[6]>s[7]){
            boy[i].pizza++;
        }
        else{
            boy[i].girl++;
        }
    }
}
/*for(int i=0;i<x;i++){
    cout<<boy[i].name<<" "<<boy[i].taxi<<" "<<boy[i].pizza<<" "<<boy[i].girl<<endl;
}*/
for(int i=0;i<x;i++){
    if(boy[i].taxi>maxi){
        s.clear();
        maxi=boy[i].taxi;
        s+=boy[i].name;
    }
    else if(boy[i].taxi==maxi){
        s+=", ";
        s+=boy[i].name;
    }
}
cout<<"If you want to call a taxi, you should call: "<<s<<"."<<endl;
maxi=-1;
s.clear();
for(int i=0;i<x;i++){
    if(boy[i].pizza>maxi){
        s.clear();
        maxi=boy[i].pizza;
        s+=boy[i].name;
    }
    else if(boy[i].pizza==maxi){
        s+=", ";
        s+=boy[i].name;
    }
}
cout<<"If you want to order a pizza, you should call: "<<s<<"."<<endl;
maxi=-1;
s.clear();
for(int i=0;i<x;i++){
    if(boy[i].girl>maxi){
        s.clear();
        maxi=boy[i].girl;
        s+=boy[i].name;
    }
    else if(boy[i].girl==maxi){
        s+=", ";
        s+=boy[i].name;
    }
}
cout<<"If you want to go to a cafe with a wonderful girl, you should call: "<<s<<"."<<endl;

}
