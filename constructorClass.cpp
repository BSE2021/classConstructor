// constructorClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//class Student
class Student {
    //access specifier;
private:
    int id;
    string name;
    int lab1, lab2;
    int av;
    string result;
public:
    //default constructor has no parameters. 
    Student(int i=101, string n="Rex", int l1 =0, int l2=0) {
        id = i;
        name = n;
        lab1 = l1;
        lab2 = l2;
       
    }
 //member function
    void getValues() {
        cout << "\n******************";
        cout << "\nEnter id: ";
        cin >> id;
        cout << endl;
        cout << "Enter name: ";
        cin >> name;
        cout << endl;
        cout << "Enter lab1 mark: ";
        cin >> lab1;
        cout << endl;
        cout << "Enter lab2 mark: ";
        cin >> lab2;
        cout << endl;
    }

    void averageLabs() {
        av = ((lab1 + lab2) / 2);
    }

    void results() {
        if (av >= 50) {
            result = "Pass";
        }
        else {
            result = "Fail";
        }
    }
    //member function
    void outputStudent() {
        cout << "\n=================";
        cout << "\nID: " << id << endl<< "Name: " << name<<endl;
        cout << "The average is " << av << endl;
        cout << "The result is " << result << endl;
        cout << "\n=================";
    }
};

int main()
{
    Student studObj; //student object studObj is of Student class
    /*studObj.id = 101;
    studObj.name = "Lazarus";
    cout << studObj.id <<endl;
    cout << studObj.name;*/
    /*Student s1(105, "Tony");
    s1.outputStudent();
    Student s2(106, "Sony");
    s2.outputStudent();
    Student s3(107, "Pony");
    s3.outputStudent();*/
    int i;
    Student s;
    for (i = 0; i < 3; i++) {
        
        s.getValues();
        s.averageLabs();
        s.results();
        s.outputStudent();
    }
}
