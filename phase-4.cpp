#include<bits/stdc++.h>
using namespace std;
class student{
public:
    string name;
    double* cgpa;

    student(string name,double gpa){
        this->name=name;
        cgpa=new double;
        *cgpa=gpa;
    }

    student(student &obj){
        this->name=obj.name;
        cgpa=new double;
        *cgpa=*obj.cgpa;
    }

    void get_info(){
        cout<<name<<endl;
        cout<<*cgpa<<endl;
    }
};
int main(){
    student st1("anisha",8.5);
    student st2(st1);

    st1.get_info();
    *(st2.cgpa)=8.4;
    st2.name="kashish";

    st1.get_info();
    st2.get_info();

    return 0;
}