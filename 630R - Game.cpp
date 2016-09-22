#include<iostream>
#include<fstream>   
using namespace std;

int main()
{
    long long n;
    while(cin >> n && n != EOF){
        if(n % 2 == 0)
        cout << "2\n";
        else cout << "1\n";
        
    }
    return 0;
}
