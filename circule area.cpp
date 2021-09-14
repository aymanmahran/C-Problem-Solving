#include<iostream>
using namespace std ;
int main (){
	int x ;
	cin>>x;
	cout<<"NOTAS:"<<endl;
	int y ;
	y=x/100 ;
	x=x-y*100 ;
	int z ;
	z=x/50 ;
	x=x-z*50 ;
	int k ;
	k=x/20 ;
	x=x-k*20 ;
	int s ;
	s=x/10 ;
	x=x-s*10 ;
	int g ;
	g=x/5;
	x=x-g*5 ;
	int t=
	t=x/2 ;
	x=x-t*2 ;
	cout<<y<<" nota(s) de R$ 100,00"<<endl;
	cout<<z<<" nota(s) de R$ 50,00"<<endl;
	cout<<k<<" nota(s) de R$ 20,00"<<endl;
	cout<<s<<" nota(s) de R$ 10,00"<<endl;
	cout<<g<<" nota(s) de R$ 5,00"<<endl;
	cout<<t<<" nota(s) de R$ 2,00"<<endl;
	cout<<"MOEDAS:"<<endl;
	double u ;
	u=x/1;
	x=x-u*1;
	double e ;
	e=x/0.50;
	x=x-e*0.50;
	double h ;
	h=x/0.25;
	x=x-h*0.25;
	double j;
	j=x/0.10;
	x=x-j*0.10;
	double q;
	q=x/0.05;
	x=x-q*0.05;
	double a ;
	a=x/0.01;
	x=x-a*0.01;
	cout<<u<<" moeda(s) de R$ 1.00"<<endl;
	cout<<e<<" moeda(s) de R$ 0.50"<<endl;
	cout<<h<<" moeda(s) de R$ 0.25"<<endl;
	cout<<j<<" moeda(s) de R$ 0.10"<<endl;
	cout<<q<<" moeda(s) de R$ 0.05"<<endl;
	cout<<a<<" moeda(s) de R$ 0.01"<<endl;
}
	
	

