#include<iostream>
using namespace std;

class Patient {
public:
    int id;
    string name;
    int age;

    void getData() {
        cout << "Enter Patient ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
        cout << "\nPatient ID: " << id;
        cout << "\nName: " << name;
        cout << "\nAge: " << age << endl;
    }
};

int main() {
    Patient p;
    p.getData();
    p.display();
    return 0;
}



