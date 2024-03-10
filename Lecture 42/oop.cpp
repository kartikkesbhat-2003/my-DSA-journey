#include<bits/stdc++.h>
using namespace std;

class Hero {

    // variables (Properties of object)
    private:                                // access modifiers (Private)
    char level;


    public:                                 // access modifiers (Public)
    int health;

    // function (State / behavior )

    void print()
    {
        cout << level << endl;
    }

    // getter methods

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    // setter method

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char l) {
        level = l;
    }

    // constructor
    Hero() {
        cout << "default Constructor called" << endl;
    }

    // parameterized constructor
    Hero (int health, char level) {
        cout << "Parameterized constructor called" <<endl;
        this -> health = health;
        this -> level = level;
    }

    // copy constructor
    Hero (Hero &temp) {
        cout << "Copy constructor called" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }
};

int main(){

    /*
    
    // static object creation
    Hero ramesh;

    ramesh.setHealth(2);
    ramesh.setLevel('A');

    cout<<"Health : " << ramesh.getHealth() << endl;
    cout << "Level : " << ramesh.getLevel() << endl;
    // cout<<"Size : "<< sizeof(ramesh)<<endl;

    // dynamic object creation
    Hero *b = new Hero;

    b->setHealth(4);
    b->setLevel('r');

    cout<<"Health : " << b->getHealth() << endl;
    cout << "Level : " << b->getLevel() << endl;
    
    */

    Hero a(2, 'A');
    cout<<"Health : " << a.getHealth() << endl;
    cout << "Level : " << a.getLevel() << endl;

    Hero *b = new Hero(4, 'B');
    cout<<"Health : " << b->getHealth() << endl;
    cout << "Level : " << b->getLevel() << endl;

    // copy constructor called (copy the properties of object a into object c)
    Hero c(a);
    cout<<"Health : " << c.getHealth() << endl;
    cout << "Level : " << c.getLevel() << endl;

    

}