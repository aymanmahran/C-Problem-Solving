#include <bits/stdc++.h>
using namespace std;

int sumofbinary(int number) {
	int remainder=0;
	while(number!=1){
	remainder += number%2;
	number /=2;

	}
	return remainder+1;
}

int main() {
	int number;
	cin >> number;
    int x=sumofbinary(number);
    cout<<pow(2,x);
}

