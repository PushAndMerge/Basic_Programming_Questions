#include<bits/stdc++.h>
using namespace std;
int main(){
	// reverse the digit
	long long num;
	cin>>num;
	long long count=0;
	while(num){
		long long digit=num%10;
		count++;
		num=num/10;
	}
	cout<<count;
	return 0;
}