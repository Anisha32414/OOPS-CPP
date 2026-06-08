// Hybrid Inheritance example:- 

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

class GrandChild : public Child2{
public:
    string grandChild_name;
    int grandChild_age;

    GrandChild(){
        cout<<"GrandChild constructor called"<<endl;
    }
    void set_info(string grandChild_name,int grandChild_age){
        this->grandChild_name=grandChild_name;
        this->grandChild_age=grandChild_age;
    }
    void get_info(){
        cout<<"grandChild name :-"<<grandChild_name<<endl;
        cout<<"grandChild age :-"<<grandChild_age<<endl;
    }
};

int main(){
    Child1 c1;
    c1.set_info("Harshit",40);
    c1.get_info();

    Child2 c2;
    c2.set_info("Priya",40);
    c2.get_info();

    GrandChild gr;
    gr.set_info("shweta",12);
    gr.get_info();
    return 0;
}