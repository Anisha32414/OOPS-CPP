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
    cout<<a.get_price();

    Animal b;
    Animal c;
    return 0;
}