// Multiple Inheritance example:- 

#include<bits/stdc++.h>
using namespace std;

class Parent1{
public:
    string name1;
    int age1;
    Parent1(){
        cout<<"I am parent1..new object created!!"<<endl;
    }
};

class Parent2{
public:
    string name2;
    int age2;
    Parent2(){
        cout<<"I am parent2..new object created!!"<<endl;
    }
};

class Child : public Parent1, Parent2{
public:
    Child(){
        cout<<"Child class constructor called"<<endl;
    }
    void set_info(string name1,int age1,string name2,int age2){
        this->name1=name1;
        this->age1=age1;
        this->name2=name2;
        this->age2=age2;
    }
    void get_info(){
        cout<<"name of parent 1 :-"<<name1<<endl;
        cout<<"age of parent 1 :-"<<age1<<endl;
        cout<<"name of parent 2 :-"<<name2<<endl;
        cout<<"age of parent 2 :-"<<age2<<endl;
    }
};

int main(){
    Child c;
    c.set_info("Harshit",35,"Priya",35);
    c.get_info();

    return 0;
}