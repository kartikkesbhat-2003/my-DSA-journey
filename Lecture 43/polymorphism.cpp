#include<bits/stdc++.h>
using namespace std;

// function Overloading 

class A {

    public:
    void sayHello() {
        cout << "Hello Kartik Kesbhat" << endl;
    }

    void sayHello(string name) {
        cout << "Hello " << name << endl;
    }

    void add(int a, int b, int c = 0 , int d = 0) {
        cout << a + b + c + d << endl;
    }

    void add(int a, double b) {
        cout << a + b << endl;
    }
};

// operator overloading

class B {

    public:
    int a;
    int b;

    public:

    int add () {
        return a + b;
    }

    // overloading plus "+" operrator

    void operator+ (B &obj) {
        int val1 = this -> a;
        int val2 = obj.a;
        cout << "Output " << val2 - val1 << endl;
    }

    // overloaading brackets "()"

    void operator() () {
        cout << "Bracket Overloaded " << this->a << endl;
    }
};

// function overriding

class Animal {

    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << "Barking Dog" << endl;
    }
};

int main() 
{

    // function overloading
    cout << "Function Overloading" << endl;

    A obj;
    obj.sayHello("kartik");
    obj.sayHello();

    obj.add(2 , 3.4);
    obj.add(2,6);
    obj.add(1,2,3,4);

    // operator overloading
    cout << "Operator Overloading" << endl;

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

    // function overriding

    cout << "Function Overriding" << endl;

    Dog obj3;
    obj3.speak();
    
}