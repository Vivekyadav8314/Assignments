 #include<iostream>
#include<map>
using namespace std;

int main()
{
        map<int,string> student;

        student[1]="Swetav";
        student[2]="Niharika";

        student.insert(make_pair(3,"Sumit"));
        student.insert(make_pair(4,"Vivek"));
        student.insert(make_pair(5,"Rutaja"));

        cout<<"Map student elements are..."<<endl;
        for(int i=1;i<=student.size();i++)
        {
                cout<<"Student[" << i << "]: "<<student[i]<<endl;
        }

        student[5]="Alice";
        student[5]="Bob";

        cout<<"Map student elements are..."<<endl;
        for(int i=1;i<=student.size();i++)
        {
                cout<<"Student[" << i << "]: "<<student[i]<<endl;
        }

        return 0;
}
