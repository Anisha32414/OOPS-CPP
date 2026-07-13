#include<bits/stdc++.h>
using namespace std;

class teacher{
    public:
       string name;
       string dept;

       teacher(string name,string dept){
          this->name=name;
          this->dept=dept;
          cout<<"base class constructor called"<<endl;
       }

       void get_info(){
          cout<<"this is base class"<<endl;
          cout<<"name is: "<<name<<endl;
          cout<<"dept is "<<dept<<endl;
       }
    };
    class faculty:public teacher{
    public:
       int age;
       int exp;

       faculty(string name,string dept,int age,int exp):teacher(name,dept){
           this->age=age;
           this->exp=exp;
           cout<<"child class constructor called"<<endl;
       }

       void get_info(){
           cout<<"this is child class"<<endl;
           cout<<"age is "<<age<<endl;
           cout<<"exp is "<<exp<<endl;
       }
    };
    int main(){
        teacher t1("sneha","IT");
        t1.get_info();

        faculty f1("rahul","HR",28,2);
        f1.get_info();
        
        return 0;
    }