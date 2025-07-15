#include<bits/stdc++.h>
using namespace std;
void prime(int num){
	if(num<2)
		return;
	for(int i=2;i<num;i++){
		if(num%i==0){
			return;
		}
	}
	cout<<num<<endl;
	return;
}
int main(){
	int arr[6]={17,4,8,12,5,15};
	for(int i=0;i<6;i++){
		prime(arr[i]);
	}

}
