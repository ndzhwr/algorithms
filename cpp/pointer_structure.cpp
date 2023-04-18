#include <iostream>
using namespace std;

enum AnimalType
{
    DOMESTIC = 1,
    WILD
};
struct Animal
{
    int id;
    string name;
    AnimalType type;
};
int main()
{

    Animal *animal,an;
    an.id = 1 ;
    an.name = "Dog";
    an.type = DOMESTIC;

    animal = &an;
    cout << (*animal).id << endl ;
    cout << animal->name << endl;

}
