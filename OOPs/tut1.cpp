 #include<bits/stdc++.h>
 #include "tut2.cpp"
 using namespace std;


class Hero{
    // properties
    private:
    int health;
    public:
    char level;

    void print(){
        cout<<level<< endl;

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

    //Static Allocation
    Hero a;
    a.setHealth(80);
    a.setlevel('8');
cout << "level is " << a.level << endl;
cout << "health is " << a.getHealth() << endl;

    // Dynamic Allocation
    Hero *b = new Hero;
    b->setlevel('A');
    b->setHealth(70);
cout << "level is " << (*b).level << endl;
cout << "health is " << (*b).getHealth() << endl;

cout << "level is " << b->level << endl;
cout << "health is " << b->getHealth() << endl;
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