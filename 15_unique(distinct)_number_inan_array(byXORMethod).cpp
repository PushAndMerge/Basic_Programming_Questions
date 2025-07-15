#include<bits/stdc++.h>
using namespace std;

int main(){
	//find a distinct digit in an array
	int arr[5]={9,9,4,4,12};
	int result=0;
	for(int i=0;i<=4;i++){
		result ^=arr[i];
	}
	cout<<result;
	return 0;

}
