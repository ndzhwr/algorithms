#include <iostream>
using namespace std;

// structs are user defined data types in cpp

enum Class
{
    Y1 = 1,
    Y2,
    Y3
};
struct Student
{
    int age;
    string name;
    Class darasa;

    void greet()
    {
        cout << "Hey there! I'm " << name << ", a Y" << darasa << " student with " << age << " years of age. " << endl ;
    }
};

int main()
{
    struct Student std1 ;
    std1.name = "Regis NDIZIHIWE";
    std1.age =  31 ;
    std1.darasa = Y2;
    // call the great function
    std1.greet();
    struct Student std2 =  { 29, "Javis MUGABO", Y3};
    std2.greet();


    return 0 ;
}
