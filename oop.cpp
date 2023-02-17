// OOP is a programming style that involves class and object.
// An object is a basic entity that possess some property and behavior

#include <iostream>
using namespace std;

class Nation
{
public:
    int ccode;
    string name;
    Nation(string name)
    {
        this->name  = name;
    }
    Nation(string,int);
    void print_name();
    int set_code(int);
};

void Nation::print_name ()
{
    cout << "Nation's name: " << name << endl;
}

int Nation::set_code(int code)
{
    ccode =  code;
    return ccode;
}

Nation::Nation(string nname, int code)
{
    name = nname ;
    ccode = code ;
}

int main()
{
    Nation *nt1 = new Nation("Rwanda");
    nt1->print_name();
    nt1->set_code(250);
    cout << "Country code: " << nt1->ccode << endl;

    cout << "\n\n\n\n";
    Nation nt2 ("Brazil",55);
    nt2.print_name();

    return 0;
}
