#include<bits/stdc++.h>
using namespace std;
int main(){
	// reverse the digit
	int num;
	cin>>num;
	int sum=0;
	while(num){
		int digit=num%10;
		sum=sum*10+digit;
		num=num/10;
	}
	cout<<sum;
	return 0;
}