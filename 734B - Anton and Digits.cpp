#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, d, minn, minn2;
	cin >>  a >> b >> c >> d;
	minn = min(a,c); 
	minn = min(minn,d);
	a = a - minn;
	minn2 = min(a,b);
	cout << (minn * 256) + (minn2 * 32) <<"\n";
	
	return 0;
}
