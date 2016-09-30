#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
    string s[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int can;
    cin >> can;
    while (can>5){
        can = can/2-2;
    }
    cout << s[can-1] <<"\n";
    
    return 0;
    
}
