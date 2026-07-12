//Encapsulation 

#include<bits/stdc++.h>
using namespace std;

class Animal{
private: 
    int price;
public:
    string name;
    string sound;

    Animal(){   
        cout<<endl<<"I am constructor!! New object is created"<<endl;
    }

    Animal(string n,string s,int p){
        cout<<endl<<"I am constructor!! New object is created"<<endl;
        name=n;
        sound=s;
        price=p;
    }
    void get_info(){
        cout<<name<<endl;
        cout<<sound<<endl;
        cout<<price;
    }

    void animal_name(string n){
        name=n;
    }
    void ani_sound(string s){
        sound=s;
    }

    //setter
    void set_price(int p){
        price=p;
    }

    //getter
    int get_price(){
        return price;
    }
};

int main(){
    Animal a;
    a.animal_name("Dog");
    a.ani_sound("bark");
    a.set_price(10000);
    a.get_price();

    cout<<endl;
    cout<<a.name<<endl;
    cout<<a.sound<<endl;
    cout<<a.get_price()<<endl;

    Animal b("Cat","Meow",12000);
    b.get_info();
    return 0;
}