#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Student
{
public:
    int rollNumber;
    string name;
    int age;
    float marks;
    Student* next;

    Student(int rolln, string name, int age, float marks)
    {
        this->rollNumber =  rolln;
        this->name = name ;
        this->marks = marks;
        this->age =  age;
        this->next =  NULL;
    }

    void save_to_txt()
    {
        ofstream myfile;
        myfile.open("database.txt",std::ios_base::app);
        myfile << rollNumber << ", " <<name<< ", "<<marks<<", "<<age << endl;
        myfile.close();
    }

    void display()
    {
        cout << "Name: " << name << " Age: " << age << " Marks: " << marks << " Roll number: " << rollNumber  << endl;
    }

    static void print_linked_list(Student *head)
    {
        while(head != NULL)
        {
            head->display();
            head = head->next;
        }
    }

    static void add_student(Student **head, int rolln, string name, int age, float marks)
    {
        Student *n = new Student(rolln,name,age,marks);
        n->next = *head;
        *head = n;
    }

    static int list_size(Student *n)
    {
        int x = 1;
        while(n != NULL)
        {
            x++;
            n = n->next;
        }
        return x;
    }

    static float list_average_marks(Student *head,int count)
    {
        float sum = 0.0;

        while(head != NULL)
        {
            sum += head->marks ;
            head = head->next;
        }
        cout << "Current sum: " << sum << endl ;
        cout << "Current entries: "<< count << endl ;
cout << "Average : " ;
        float average = sum /count ;
        return average;
    }
};



void sectionize(string section)
{
    cout << "\n-------------"<<section<<"------------\n" << endl;
}
int main()
{
    int cur_in = 0 ;
    Student *head ;

    for(int i = 1 ; i <= 3 ; i++ )
    {
        int age, rolln ;
        string name;
        float marks;

        cout << "\nEnter student " << i << " roll number : ";
        cin >>  rolln;
        if(rolln < 0)
        {
            cout << "A roll number must be a valid positive integer" << endl ;
            return 0;
        }
        cout << "\nEnter student " << i << " age : ";
        cin >>  age;
        if(age < 10 || age > 30)
        {
            cout << "Age should be between 10 and 30 inclusive" << endl;
            return 0;
        }
        cout << "\nEnter student " << i << " marks : ";
        cin  >> marks ;
        if(marks > 50  || marks < 0)
        {
            cout << "Marks should be between 0 and 50 inclusive" << endl ;
            return 0;
        }


        cin.ignore();
        cout << "\nEnter student " << i  << " name : " ;
        getline(cin,name);

        Student *stdnt = new Student(rolln,name,age,marks);
        stdnt->save_to_txt();
        Student::add_student(&head,rolln,name,age,marks);

        sectionize("NEW RECORD");  //to leave space
        stdnt->display();
        cur_in++;
        cout << Student::list_average_marks(head,cur_in);
        cout << endl;  // to leave space
    }

    sectionize("CURRENT LIST"); // to leave space
    Student::print_linked_list(head);



    ifstream file2;
    file2.open("./database.txt");


    string line;
    while (getline(file2, line))
    {
        string  token = ", ";
        string  word;
        stringstream ss(line);
        string words[4];
        int i = 0;
        while (getline(ss, word, token[0]))
        {
            words[i] = word;
            i++;
        }
        int rollNumber = stoi(words[0]);
        string name = words[1];
        float marks = stof(words[2]);
        int age = stoi(words[3]);

        Student *student2 =  new Student(rollNumber,name,age,marks);
        sectionize("RECORD FROM FILE");
        student2->display();

    }
    file2.close();


    return 0;



}

