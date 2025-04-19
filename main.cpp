#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name[100];
    int id[100];
    double marks[100];
public:
    int n=0;
    void addStudent(int N)
    {
        do
        {
        cout<<"Enter student name: ";
        cin.ignore();
        getline(cin,name[N]);
        cout<<"Enter student id: ";
        cin>>id[N];
        cout<<"Enter student marks: ";
        cin>>marks[N];
        bool test2=false;
        for(int i=0;i<n;i++)
        {
            if(id[N]==id[i])
            {
                test2=true;
                cout<<"This iD already exist ,Try again"<<endl;
                break;
            }
        }
        if (test2==false)
            break;
        }
         while (true);

        n++;
    }
    void displayNameAndMarks(int Id)
    {
        bool test1=false;
        for(int i=0;i<n;i++)
        {
            if(id[i]==Id)
            {
                cout<<"Student name: "<<name[i]<<" ,His marks: "<<marks[i]<<endl;
                test1=true;
            }
        }
        if(test1==false)
        {
            cout<<"This id does not exist"<<endl;
        }
    }
    void displayAllStudents()
    {
        if(n==0)
            cout<<"No students have been added yet"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"Name: "<<name[i]<<" ,His id: "<<id[i]<<" ,His marks: "<<marks[i]<<endl;
        }
    }
};
int main()
{
    int ch,Id;
    Student ob1;
    while(1)
    {
        cout << "1. Add Student"<<endl;
        cout << "2. Search Student by id"<<endl;
        cout << "3. Display All Students"<<endl;
        // cout << "4. Show Top Student\n";
        cout << "4. Exit"<<endl;

        cout <<"\nEnter choice: ";
        cin>>ch;
        if(ch==1)
        {
            ob1.addStudent(ob1.n);
        }
        else if(ch==2)
        {
            cout<<"Enter the student id: ";
            cin>>Id;
            ob1.displayNameAndMarks(Id);
        }
        else if(ch==3)
        {
            ob1.displayAllStudents();
        }
        else if(ch==4)

            break;
        else
            cout<<"You must enter only 1,2,3 or 4"<<endl;
        cout<<"\n******************************************\n"<<endl;
    }

    return 0;
}

