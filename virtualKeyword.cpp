#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void show(){
    cout << "Parent class!" << endl;
    }
};

class Child : public Parent
{
public:
    void show(){
    cout << "Child class!" << endl;
    }
};

int main()
{
    Parent* ptr;
    Parent par;
    ptr=&par;
    ptr->show();
    Child chi;
    ptr=&chi;
    ptr->show();

    
    return 0;
}