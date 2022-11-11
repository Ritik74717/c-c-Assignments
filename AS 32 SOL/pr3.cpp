#include<iostream>
using namespace std;
class Animal
{
protected:
    string voice;

public:
    void sound(string s)
    {
        voice=s;
        cout<<"The sound Of Animal is :"<<voice<<endl;
    }

};
class Dog:public Animal
{
    protected:
    string dog_voice;
    public:
    void sound(string s)
    {
        dog_voice=s;
        cout<<"The sound of dog is :"<<dog_voice<<endl;
    }
};
int main()
{
    Dog d1;
    d1.sound("Bow");

    Animal a1;
    a1.sound("Meow");
    return 0;
}
