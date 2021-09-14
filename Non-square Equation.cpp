#include<bits/stdc++.h>
using namespace std;
long long x,f,s,sum;
stringstream c;
string d;
int main(){
cin>>x;
for(long long i=1;i<91;i++){
        sum=0;
    f=((-i+(sqrt(floor(pow(i,2)+0.5)-(4*1)*-x)))/2);
    s=((-i-(sqrt(floor(pow(i,2)+0.5)-(4*1)*-x)))/2);
    f=max(f,s);
    c<<f;
    c>>d;
    c.clear();
    //cout<<f<<" "<<s<<" "<<sum<<endl;
    for(int j=0;j<d.size();j++){
        sum+=(d[j]-48);
    }
    //cout<<sum<<endl;
    if(sum==i){
            if(f*f+f*sum-x==0){
        cout<<f<<endl;
        exit(0);
            }
    }
    //cout<<i<<" "<<sum<<" "<<power<<endl;
}
cout<<"-1"<<endl;
}
