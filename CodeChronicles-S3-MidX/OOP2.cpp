/*Assign and print the roll number, phone number and address of two students having
names "Shofi" and "Jamshed" respectively by creating two objects of the class 'Student'.*/

#include<bits/stdc++.h>
using namespace std;

class School{
public:

    string name,address;
    int roll_no, phone;

};

int main()
{
    School student1, student2;
    student1.name= "Shofi";
    student1.roll_no= 2;
    student1.address="CTG";
    student1.phone=1236554;

    student2.name= "Jamshed";
    student2.roll_no=3;
    student2.address= "Dhaka";
    student2.phone=165461;

    cout<<student1.name<<endl<<student1.roll_no<<endl<<student1.address<<endl<<student1.phone<<endl;

    cout<<student2.name<<endl<<student2.roll_no<<endl<<student2.address<<endl<<student2.phone<<endl;
    return 0;
}
