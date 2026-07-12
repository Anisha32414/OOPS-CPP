#include<bits/stdc++.h>
using namespace std;

class Teacher{
private:
    int salary;
public:
    
    // data/Attributes
    string name;
    string dept;
    int age;

    //methods
    void change_dept(string new_dept){
        dept=new_dept;
    }

    //setter -> method for setting private data/attributes
    void set_sal(int sal){
        salary=sal;
    }
    //getter -> method to get the private values of class outside class.
    int get_sal(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name="Anisha";
    t1.dept="AI";
    t1.age=22;

    t1.set_sal(40000);
    cout<<t1.name<<endl;
    cout<<t1.age<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.get_sal();       // accessing private values outside class using getter/setter  
    return 0;
}