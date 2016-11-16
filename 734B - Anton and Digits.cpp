#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, d, min1;
	cin >>  a >> b >> c >> d;
	min1 = min(min(a,c),d); 
    	a = a - min1;
	cout << (min1 * 256) + (min(a,b) * 32) << "\n";
	
	return 0;
}
