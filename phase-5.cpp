#include<bits/stdc++.h>
using namespace std;
class teacher{
    private: 
        double salary;
    public: 
        string name;
        string dept;
        int age;

        teacher(){    //constructor
            cout<<"new object created"<<endl;
        }

        ~teacher(){   //destructor
            cout<<"deallocating object memory"<<endl;
        }

        void set_info(string name,string dept,int age,double salary){
            this->name=name;
            this->dept=dept;
            this->age=age;
            this->salary=salary;
        }
        void get_info(){
            cout<<name<<endl<<dept<<endl<<age<<endl<<salary<<endl;
        }
    };
    int main(){
        teacher t1;
        t1.set_info("anisha","csai",22,40000);
        t1.get_info();
        return 0;
    }