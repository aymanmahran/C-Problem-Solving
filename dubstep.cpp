#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s;
long long found,sizeo;
cin>>s;
sizeo=s.size();
for(long long i=0;i<sizeo;i++){
    if(s.find("WUB")!=EOF){
        found=s.find("WUB");
        if(found==0){
            s.erase(s.begin(),s.begin()+3);
        }
        else if(found!=0){
            if(s[found-1]==' '){
                s.erase(found,3);
            }
            else if(s[found-1]!=' '){
                s.replace(found,3," ");
            }
        }
    }

    else if(s.find("WUB")==EOF){
        break;
    }

}
cout<<s;
cout<<endl;
}
