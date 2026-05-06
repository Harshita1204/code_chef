#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	cin>>n>>k;
	int needs_to_win=(n/2)+1;
	int final= needs_to_win-k;
	
	if(final<0){
	    cout<<0;
	}else{
	    cout<<final;
	}
return 0;
}
