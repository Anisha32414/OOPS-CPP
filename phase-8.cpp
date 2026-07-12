// Multi-Level Inheritance example:- 

#include<bits/stdc++.h>
using namespace std;

class GrandParent{
public:
    string name;
    int age;
    GrandParent(){
        cout<<"I am Grandparent..new object created!!"<<endl;
    }
};

class Parent : public GrandParent{
public:
    string parent_name;
    int parent_age;

    Parent(){
        cout<<"Parent class constructor called"<<endl;
    }
    void set_info(string name,int age){
        this->name=name;
        this->age=age;
    }
    void get_info(){
        cout<<"GrandParent name :-"<<name<<endl;
        cout<<"Grandparent age :-"<<age<<endl;
    }
};

class Child : public Parent{
public:
    Child(){
        cout<<"Child class constructor called"<<endl;
    }
    void set_info(string parent_name,int parent_age){
        this->parent_name=parent_name;
        this->parent_age=parent_age;
    }
    void get_info(){
        cout<<"parent name :-"<<parent_name<<endl;
        cout<<"Parent age :-"<<parent_age<<endl;
    }
};

int main(){
    Parent p;
    p.set_info("Harshit",52);
    p.get_info();

    Child c;
    c.set_info("Priya",25);
    c.get_info();
    return 0;
}