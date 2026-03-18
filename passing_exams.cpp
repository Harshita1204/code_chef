#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	int x,y,z;
	cin>>x>>y>>z;
	
	if((x>=50&&y>=50)||(y>=50&&z>=50)||(x>=50&&z>=50)){
	    cout<<"yes"<<endl;
	}
	else{
	    cout<<"no"<<endl;
	}
	}
	return 0;

}
