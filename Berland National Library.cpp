#include<bits/stdc++.h>
using namespace std;
int x,arr[100],np,nr;
char c[100];
bool flag;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>c[i]>>arr[i];
}
for(int i=0;i<x;i++){
        flag=false;
    if(c[i]=='+'){
        if((np+1)<=nr){
            np++;
        }
        else{
            np++;
            nr++;
        }
    }
    else if(c[i]=='-'){
        for(int j=0;j<i;j++){
            if(c[j]=='+'&&arr[j]==arr[i]){
                flag=true;
                break;
            }
        }
        if(flag){
            np--;
        }
        else{
            nr++;
        }
    }
}
cout<<nr<<endl;
}
