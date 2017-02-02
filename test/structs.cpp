#include <iostream>

using namespace std;

struct student {
    char name[30];
    int roll;
};

int main () {

    student s1;
    s1.name = "Rahul";
    s1.roll = 20;

    student* s2 = new student;
    s2->name = "Shyam";
    s2->roll = 20;

    (*s2).name = "Mohit";

    (&s1)->name = "Rohit";

}