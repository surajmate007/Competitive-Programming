#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    if(n <= 3){
	        for(int i=1; i<=n; i++){
	            cout<<i<<" ";
	        }
	        cout<<endl;
	    }
	    else{
	        cout<<n<<" ";
    	    cout<<n-2<<" ";
    	    for(int i=1; i<=n-4; i++){
    	        cout<<i<<" ";
    	    }
    	    cout<<n-3<<" ";
    	    cout<<n-1<<endl;
	    }
	}
	
	return 0;
}
