#include <iostream>
using namespace std;

class Human{
private:
	string Name;
	int Age;
public:
	void setName(string varName);
	void setAge(int varAge);
	void getName();
	void getAge();
};

void Human::setName(string varName){
	Name=varName;
}
void Human::setAge(int varAge){
	Age=varAge;
}
void Human::getName(){
	cout<<"Name::"<<Name<<'\n';
}
void Human::getAge(){
	cout<<"Age::"<<Age;
}

int main(){
	Human hum1;
    hum1.setName("Gargi");
    hum1.setAge(24);
    hum1.getName();
    hum1.getAge();

	return 0;
}