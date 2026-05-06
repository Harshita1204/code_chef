#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int x,y,z;
	cin>>x>>y>>z;
	
	if(x>y) swap(x,y);
	if(y>z) swap(y,z);
	if(x>z) swap( x,z);
	
	if(x+y>z){
	    cout<<0<<endl;
	}
	else{
	    cout<<z-(x+y)+1<<endl;
	}
	}
	return 0;

}
