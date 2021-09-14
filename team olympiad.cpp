#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
x=static_cast<const int>(x);
int arr[x],num1=0,num2=0,num3=0,a=0,one[x],two[x],three[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
    if(arr[i]==1){
        one[num1]=i;
        num1++;
    }
    if(arr[i]==2){
        two[num2]=i;
        num2++;
    }
    if(arr[i]==3){
        three[num3]=i;
        num3++;
    }
}
a=min(num1,num2);
a=min(a,num3);
cout<<a<<endl;
for(int i=0;i<a;i++){
    cout<<one[i]+1<<" "<<two[i]+1<<" "<<three[i]+1<<endl;
}
}
