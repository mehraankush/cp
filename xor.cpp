#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    
	    int result=0;
	    for(int &i:a){
	        cin>>i;
	        result ^=i;
	    }
	    cout<<result<<endl;
	}
	return 0;
}
