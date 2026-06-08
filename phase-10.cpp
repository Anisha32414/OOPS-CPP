// Hierarchial Inheritance example:- 

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

class Child1 : public Parent{
public:
    Child1(){
        cout<<"Child1 class constructor called"<<endl;
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

class Child2 : public Parent{
public:
    Child2(){
        cout<<"Child2 class constructor called"<<endl;
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
    Child1 c1;
    c1.set_info("Harshit",22);
    c1.get_info();

    Child2 c2;
    c2.set_info("Priya",22);
    c2.get_info();
    return 0;
}