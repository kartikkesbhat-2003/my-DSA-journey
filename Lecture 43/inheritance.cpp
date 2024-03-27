#include<bits/stdc++.h>
using namespace std;


class Human {
    public:
    int height;
    int age;
    int weight;

    public:
    
    int getAge() {
        return this->age;
    }

    void setweight(int w)
    {
        this -> weight = w;
    }

};

class Male: public Human {
    public:
    string color;

    void sleep()
    {
        cout<<"male is sleeeping"<<endl;
    }
};

int main() 
{
    Male obj;

    obj.setweight(45);

    cout << obj.color << endl;
    cout << obj.weight << endl;
    cout << obj.age << endl;
    cout << obj.height << endl;
    obj.sleep();

}