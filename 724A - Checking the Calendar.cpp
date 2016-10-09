#include <iostream>
using namespace std;

int main(){ 
    string d1, d2;
    cin >> d1 >> d2;
    if(d1=="sunday"){
        if(d2 =="sunday"||d2 =="wednesday"|| d2=="tuesday")
            cout << "YES\n";
        else cout << "NO\n";
    }
    if(d1=="saturday"){
        if(d2 =="tuesday"|| d2 =="monday"|| d2 =="saturday")
            cout << "YES\n";
        else cout << "NO\n";
    }
    if(d1 == "monday"){
        if(d2 =="wednesday"||d2 =="thursday"|| d2 =="monday")
            cout << "YES\n";
        else cout << "NO\n";
    }
    if(d1 =="tuesday"){
        if(d2 =="thursday"||d2 =="tuesday"||d2 =="friday")
             cout << "YES\n";
        else cout << "NO\n";
    }
    if(d1=="wednesday"){
        if(d2 =="friday"||d2 =="saturday"||d2 =="wednesday")
             cout << "YES\n";
        else cout << "NO\n";
    }
    if(d1 =="thursday"){
        if(d2 =="sunday"||d2 =="thursday"||d2 =="saturday")
             cout << "YES\n";
        else cout << "NO\n";
    }
    if(d1 =="friday"){
        if(d2 =="monday"|| d2 =="sunday"|| d2 =="friday")
             cout << "YES\n";
        else cout << "NO\n";
    }
    
	return 0;
}
