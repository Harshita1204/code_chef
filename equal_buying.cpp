#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	// sacks of flour = 2kg
	// sacks of sugar = 1kg
	// 2x+y=n , for x=y , put value of y into the equation u will get x=n/3 . 
	if(n%3==0){
	    cout<<"yes";
	}
	else{
	  cout<<"no";
	}
	return 0;

}
