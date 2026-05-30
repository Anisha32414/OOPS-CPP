#include<bits/stdc++.h>
using namespace std;

class teacher{                             //base class -> parent class
public:
       string name;
       string dept;

       teacher(){         // parent class constructor
          cout<<"Parent class constructor called"<<endl;
       }

       ~teacher(){        // parent class destructor
          cout<<"Parent class destructor called"<<endl;
       }
};

// parent class is derived in "public" mode
class student:public teacher{              //derived class -> child class
public:
        string subject;

        student(){   // child class constructor
            cout<<"student class constructor called"<<endl;
        }       

        ~student(){  // child class destructor
            cout<<"student class destructor called"<<endl;
        }
        void get_info(){
            cout<<name<<endl<<dept<<endl<<subject<<endl;
        }
};

int main(){
    student s1;
    s1.name="Anisha";
    s1.dept="csai";
    s1.subject="oops";

    s1.get_info();
    return 0;
}