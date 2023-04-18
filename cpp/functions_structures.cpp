#include <iostream>
using namespace std;

struct Cat
{
    int id;
    string name;
    string desc;
};


void print_cat(Cat c)
{
    cout << "\n\n\n---------------------\n";
    cout << "   CAT INFORMATION   " << endl;
    cout << "---------------------"<< endl;
    cout << "Id: " << c.id << endl;
    cout << "Name: " << c.name << endl ;
    cout << "Description: " << c.desc << endl ;
    cout << "--------------------------" << endl;
}

Cat make()
{
    struct Cat c1 ;
    cout << "\nEnter cat id: " ;
    cin >> c1.id;
    cin.ignore();
    cout << "\nEnter cat name: ";
    getline(cin, c1.name);
    cout << "\nEnter cat description: ";
    getline(cin,c1.desc);
    return c1;

}
int main()
{
    struct Cat c1 = make();

    print_cat(c1);
    return 0;
}
