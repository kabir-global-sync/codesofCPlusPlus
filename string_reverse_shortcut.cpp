#include <iostream>
using namespace std;
int main(){
	string name;
	cout<<"Enter string::";
	cin>>name;
	
	cout<<string(name.rbegin(),name.rend());
	return 0;
}