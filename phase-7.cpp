// Single Inheritance example:- 

#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    string name;
    int age;
    Parent(){
        cout<<"I am parent..new object created!!"<<endl;
    }
};

class Child : public Parent{
public:
    Child(){
        cout<<"Child class constructor called"<<endl;
    }
    void set_info(string name,int age){
        this->name=name;
        this->age=age;
    }
    void get_info(){
        cout<<"name :-"<<name<<endl;
        cout<<"age :-"<<age<<endl;
    }
};

int main(){
    Child c;
    c.set_info("Harshit",22);
    c.get_info();
    return 0;
}