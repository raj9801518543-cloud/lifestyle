
#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollNo;
    string name;

public:
    // Constructor
    student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Student Object created" << endl;
    }

    // Display function
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~student()
    {
        cout << "Student Object destroyed" << endl;
    }
};

int main()
{
    int r;
    string n;

    cout << "Enter roll number: ";
    cin >> r;

    cin.ignore();
    cout << "Enter student name: "<< endl;
    getline(cin, n);

    student s1(r, n);
    s1.display();

    return 0;
}
