#include<bits/stdc++.h>
using namespace std;
int main(){

int str,no,cnt=0,dnt=0;
cin>>str>>no;
no=static_cast<const int>(no);
int pow[no];
int ext[no];
for(int i=0;i<no;i++){
    cin>>pow[i]>>ext[i];
}
while(dnt!=no){
    dnt++;
    for(int i=0;i<no;i++){
        if(pow[i]<str){
            str+=ext[i];
            pow[i]=111111;
            cnt++;
            break;
        }
    }
}
if(dnt==no&&cnt==no){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
