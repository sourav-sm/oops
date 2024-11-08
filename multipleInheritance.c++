#include<bits/stdc++.h>
using namespace std;


//multi-level-INHERITANCE
class Sourav{
    private:
       int age;
       int weight;
    public:
     void first(){
        cout<<"Sourav Present"<<endl;
     }

};

class Mohanta{
  private:
     int age;
    public:
        void second(){
        cout<<"Mohanta is present"<<endl;
     }
};

class sm:public Sourav,public Mohanta{
    public:
     string color;
    void third(){
        cout<<"SOURAV MOHANTA PRESENT"<<endl;
    }
};


int main(){
   //multi-level ingeritance
    sm mau;
    mau.first();
    mau.second();
    mau.third();
}