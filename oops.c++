#include<bits/stdc++.h>
using namespace std;

///ENCAPSULATION---->>
//DEFINATION--wraping up data members and functions
class Student{
    //data members
    private:
       string name;
       int age;
       int height;
    //function
    public:
    int getage(){
        return this->age;
    }   

    void setage(int age){
        this->age=age;
    }
};

//INHERITANCE
class human{
    private:
      int age;
      int height;
      int weight;

    public:
       int getage(){
        return this->age;
       }
       void addage(int age){
        this->age=age;
       }
};

class Male:public human{
        public:
          string color;

          int sleeling(){
            cout<<"male are sleeping"<<endl;
          }
};



int main(){
    // Encapsulation
    // Student Sourav;
    // Sourav.setage(21);
    // cout<<Sourav.getage()<<endl;

   
   //Inheritance
    Male Ram;
    Ram.addage(23);
    cout<<Ram.getage()<<endl;
    Ram.sleeling();
}





