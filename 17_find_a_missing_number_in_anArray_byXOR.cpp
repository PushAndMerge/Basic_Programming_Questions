#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[5]={5,3,2,1,6};
	int flag1=0,flag2=0;
	for(int i=1;i<=5;i++){
		flag1 = flag1 ^ i;
	}
	for(int i=0;i<=3;i++){
		flag2=flag2 ^arr[i];
	}

	int result=flag1^flag2;
	cout<<result;
	return 0;

}
