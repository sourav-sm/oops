#include<bits/stdc++.h>
using namespace std;


//multi-level-INHERITANCE
class Animal{
    private:
       int age;
       int weight;
    public:
     void speaking(){
        cout<<"speaking"<<endl;
     }

};

class Dog:public Animal{
  private:
     int age;
    public:
        void bark(){
        cout<<"barking"<<endl;
     }
};

class GermanSepart:public Dog{
    public:
     string color;
};


int main(){
   //multi-level ingeritance
    GermanSepart tom;
    tom.bark();
    tom.speaking();
}