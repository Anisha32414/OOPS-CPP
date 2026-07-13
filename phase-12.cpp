#include<bits/stdc++.h>
using namespace std;

   class student{
   public:
       string name;
       int roll;
       int age;
       int date;
       int month;
       int year;

       student(){
          cout<<"new object created, constructor called"<<endl;
       }

       ~student(){
          cout<<"memory deallocated..destructor called"<<endl;
       }

       int dob(int month,int year){
            this->month=month;
            this->year=year;
            return (2026-year);
       }
       int dob(int date,int month,int year){
            this->date=date;
            this->month=month;
            this->year=year;

            return (2026-year);
       }
   };
   int main(){
       student s1;
       cout<<"age of the studemt is "<<s1.dob(4,2003)<<endl;

       student s2;
       cout<<"age of the student is "<<s2.dob(14,8,2004)<<endl;
       
       return 0;
   }