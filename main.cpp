//
//  main.cpp
//  HelloWorld
//
//  Created by Jineth Dissanayake on 21/04/2025.
//
#include <iostream>
//using namespace std;
//#include <cmath>
#include <string>

//TOYING AROUND WITH BOOST LIB ABOVE

// ACTUAL STUFF BELOW

class myClass {
    private:
        std::string name;
        int age;
    public:
        //getters
        std::string getName() const {return name;}
        int getAge() const {return age;}

        //setters
        void setName(std::string a) {name = a;}
        void setAge(int b) {age = b;}

        //constructor
        myClass(int x=5, std::string y="kate"){
            age = x;
            name = y;
        }
//internal method definition
        int in5yearsillbe(int age=0) {
            return age + 5;
        }

        //method declaration for external def
        int yearsagoiwas(int age);
    protected:
        int jtest = 7;

};

class myChildObj : public myClass {
    public:
        int childjtest = jtest;
        void printProtectedvar() {
            std::cout<<jtest<<"....."<<childjtest<<"\n";
        };
};

int main() {

    myClass myobj;

    myChildObj mo2;

    std::cout<<mo2.childjtest<<"\n";
    mo2.printProtectedvar();
    std::cout<<"name is "<<myobj.getName()<<"\n";
    std::cout<<"age is "<<myobj.getAge()<<"\n";

    return 0;
 }
