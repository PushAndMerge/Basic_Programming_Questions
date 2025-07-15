#include<bits/stdc++.h>
using namespace std;
int main(){
	//prime number
	int num;
	cin>>num;
	if(num<2){// edge case
		cout<<"not prime";
		return 0;
	}
	for(int i=2;i<num;i++){
		if(num%i==0){
			cout<<"not prime";
			return 0;
		}
	}
	cout<<"prime";
	return 0;
}