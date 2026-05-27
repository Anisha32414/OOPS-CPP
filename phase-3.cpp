#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        string dept;
        int rollnum;
        int age;

        student(){
            cout<<"new object created!!"<<endl;
        }

        student(string name,string dept,int rollnum,int age){
            cout<<"new object created!!"<<endl;
            this->name=name;
            this->dept=dept;
            this->rollnum=rollnum;
            this->age=age;
        }

        student(student &obj){
            this->name=obj.name;
            this->dept=obj.dept;
            this->rollnum=obj.rollnum;
            this->age=obj.age;
        }
        void get_info(){
            cout<<name<<endl;
            cout<<dept<<endl;
            cout<<rollnum<<endl;
            cout<<age<<endl;
        }
    };
    int main(){
        student st1;
        student st2("anisha","csai",001,22);

        student st3(st2);                     // copy constructor --> it creates copy of object st2 as st3.
        st2.get_info();
        st3.get_info();

        return 0;
    }