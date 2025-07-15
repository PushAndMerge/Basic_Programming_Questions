#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int first_num=0,second_num=1,current_num;
	if(num<=0){
		cout<<"invalid number";
		return 0;
	}
	if(num==1){
		cout<<first_num;
		return 0;
	}
	if(num==2){
		cout<<second_num;
		return 0;
	}
	for(int i=3;i<=num;i++){
		current_num=first_num+second_num;
		first_num=second_num;
		second_num=current_num;
	}
	cout<<current_num;
	return 0;
}