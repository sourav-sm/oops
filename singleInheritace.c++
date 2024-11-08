#include<bits/stdc++.h>
using namespace std;


//SingleINHERITANCE
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
   //SingInheritance
    Male Sourav;
    Sourav.addage(21);
    cout<<Sourav.getage()<<endl;
    Sourav.sleeling();
}
