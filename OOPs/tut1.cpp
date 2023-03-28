 #include<bits/stdc++.h>
 #include "tut2.cpp"
 using namespace std;


class Hero{
    // properties
    private:
    int health;
    public:
    char *name;
    char level;

   Hero(){
    cout << "Constructor Called" << endl;
    name = new char[100];
   }

    // PArameterised Constructor
    Hero(int health){
       this -> health = health;
    }
    Hero(int health,char level){
       this -> level = level;
       this -> health = health;
    }


// Copy Constructor
Hero(Hero& temp){
     this -> level = temp.level;
       this -> health = temp.health;
}
    void print(){
        cout<<level<< endl;
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
     health = h;
    }

    void setlevel(char ch){
        level = ch;
    }
};
// 1 byte memory is allocated to the instance of object created for keeping the track of it or for identifying it
int main(){



Hero S(70, 'C');
S.print();
 
 //Copy Constructor
Hero R(S);
R.print();
    //Static Allocation
    // Hero a;
//     Hero ramesh(10);
// cout << "Address of ramesh" << &ramesh << endl;
// ramesh.print();

// Hero temp(22, '8');

//     a.setHealth(80);
//     a.setlevel('8');
// cout << "level is " << a.level << endl;
// cout << "health is " << a.getHealth() << endl;

//     // Dynamic Allocation
//     Hero *b = new Hero;
//     b->setlevel('A');
//     b->setHealth(70);
// cout << "level is " << (*b).level << endl;
// cout << "health is " << (*b).getHealth() << endl;

// cout << "level is " << b->level << endl;
// cout << "health is " << b->getHealth() << endl;
//dereferencing the memory 


    // Creation of Object
//     Hero Ramesh;
//     cout << "Ramesh health is " << Ramesh.getHealth() << endl;
//     Ramesh.level = 'A';
//   cout << "health is: " << Ramesh.getHealth() << endl;
//   Ramesh.setHealth(70);
//   cout << "Level is: " << Ramesh.level << endl;

    return 0;
}