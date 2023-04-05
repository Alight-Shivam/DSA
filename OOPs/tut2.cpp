#include<bits/stdc++.h>
using namespace std;

class Hero{
    // properties
    private:
    int health;
    public:
    char *name;
    char level;
    static int timeToComplete;

Hero(){
    cout << "Constructor Called" << endl;
    name = new char[100];
   }
};

class Here {
    int level;
};
// Destructor - Memory Deallocation

// ~Hero() {
//     cout << "Destructor Bhai Called..." << endl;
// }

int Hero :: timeToComplete = 5;

int main(){
    //Static
     Hero a;

     //Dynamic
     Hero *b = new Hero();
     // Manual Destructor Call in case of Dynamic Memory Allocation
    delete b;


    return 0;

}