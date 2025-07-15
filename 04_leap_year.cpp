#include<bits/stdc++.h>
using namespace std;
int main(){
	// leap year
	//1. years those are divisible by 400 are confirmly leap 
	//2. years those are divisible by 4 and not divisible by 100 are also leap years all other years are non leap e.g 
	// 	1996: 1996 % 4 == 0 ✅, 1996 % 100 != 0 ✅ → True
	// 2004: 2004 % 4 == 0 ✅, 2004 % 100 != 0 ✅ → True
	// 2012: 2012 % 4 == 0 ✅, 2012 % 100 != 0 ✅ → True
	// 2020: 2020 % 4 == 0 ✅, 2020 % 100 != 0 ✅ → True
	// 	Divisible by 4 but also by 100 (should NOT be a leap year)

	// 1900: 1900 % 4 == 0 ✅, 1900 % 100 == 0 ❌ → False
	// 2100: 2100 % 4 == 0 ✅, 2100 % 100 == 0 ❌ → False
	int year;
	cin>>year;
	if(year%400==0){
		cout<<"leap year";
	}else if(year%4==0 && year%100 != 0){
		cout<<"leap year";
	}else{
		cout<<"not leap year";
	}
	return 0;
}