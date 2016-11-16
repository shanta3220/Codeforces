#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

int main() {
	map<char,int> m;
	string s;
	int n;
	int maxn = 0;
	cin >> n;
	cin.ignore();
	getline(cin,s);
	
	for(int i = 0; i < n; i++){
	    m[s[i]] += 1;
	    maxn = max(maxn, m[s[i]]);
    }
    
    
	if(n % 2 == 0 && maxn == n / 2)
	    cout << "Friendship\n";

    else{
        map<char, int> :: const_iterator i;
        for(i = m.begin(); i != m.end(); i++){
    	    if(i -> second == maxn){
    	        if(i -> first =='A')
    	            cout << "Anton\n";
    	        else cout << "Danik\n";
            }
        } 
    }    
    
    return 0;
}
