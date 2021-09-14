#include<bits/stdc++.h>
using namespace std;
int main(){
long long travel,m,priceofone,priceofm;
cin>>travel>>m>>priceofone>>priceofm;
long long multiple=m*priceofone,div=0,sumofm=0,money=0;
if(multiple>=priceofm){
 div=travel/m;
 sumofm=m*div;
 money=div*priceofm;
travel-=sumofm;
    while(travel!=0){
            money+=priceofone;
            travel--;
    }
    cout<<money<<endl;
}
else if(multiple<priceofm){
    money=travel*priceofone;
    cout<<money<<endl;
}

}
