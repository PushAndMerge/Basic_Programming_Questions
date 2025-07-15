#include<bits/stdc++.h>
using namespace std;

int main(){
	// return duplicate values in an array in ascending order
	int arr[5]={4,4,2,3,2};
	int count[5]={0};
	for(int i=0;i<=4;i++){
		count[arr[i]]++;
	}
	for(int i=0;i<=4;i++){
		if(count[i]>1)
			cout<<i<<" ";
	}
	return 0;
}