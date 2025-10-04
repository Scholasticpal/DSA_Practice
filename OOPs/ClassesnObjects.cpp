#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Dog{
    string name;
    int age;
    string breed;

public:

    Dog(string initial_name, int initial_age, string dog_breed){
        name = initial_name;
        setAge(initial_age);
        breed = dog_breed;
        cout<<"Dog has been initialized of breed:"<<breed;
    }

    ~Dog(){
        cout<<"Dog "<<name<<" has been destroyed";
    }

    string getName() const{
        return name;
    }

    int getAge() const{
        return age;
    }

    void setAge(int new_age){
        if(new_age > 0 && new_age<30){
            age = new_age;
            cout<<"Age has been set to"<<age;
        }
        else{
            cout<<"Invalid age. Age Remains "<<age;
        }
    }

    void bark(){
        cout<<name<<" of breed "<<breed<<" says woof!";
    }
};

int main(){
    Dog mypet("Max", 10, "Labrador");
    mypet.bark();
    mypet.setAge(12);
    mypet.setAge(300);
    cout<<"Final Age: "<<mypet.getAge();


    Dog* streetDog = new Dog("James", 2, "Chiuwawa");
    streetDog->bark();
    streetDog->
    delete streetDog;

    return 0;
}