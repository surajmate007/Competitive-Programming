#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, x; cin>>n>>x;
	    
	    if(x < n){
	        cout<<-1<<endl;
	    }
	    
        else if(x == n){
            for(int i=1; i<=n; i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        
        else{
            int p = x - n + 1;
            if(p <= n){
                cout<<p<<" ";
                for(int i=1; i<=n; i++){
                    if(i != p){
                        cout<<i<<" ";
                    }
                }
                cout<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
	}
	
	return 0;
}
