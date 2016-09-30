#include<iostream>
using namespace std;

int main() {
  long long int n;
  int t,i;
  cin>>t;
	
	while(t--){
	   cin>>n;
	   if(n%5==0)
	    n=n/5;
	       
	   else n=n/5 + 1;
	 
    cout<<n<<"\n";
	   
	}
	
	return 0;
}
