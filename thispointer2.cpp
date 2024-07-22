/*
#include<iostream>
using namespace std;

class student

{
        private: string name;
		 int age;
		 string branch;
		 string city;

	public:student(string name, int age, string branch, string city) //public:student(string a, int b, string c, string d) 
               {
		      this->name=name; //name=a;
		       this->age=age; //age=b;
		       this->baranch=branch; //branach=c;
		       this->city=city;//city=d;
                      
               }

               void display()
               {
                       cout<<"Student Name ="<<name<<endl;
                       cout<<"Student Age="<<age<<endl;
		       cout<<"Student Branch ="<<branch<<endl;
		       cout<<"Student City ="<<city<endl;
               }
};

int main()
{
	student obj1.student("Vivek", 22,"EEE","Noida");
	student obj2=student("Anish",22,"BCA","Patna");
	student obj3=student("Aman",23,"BBBA","Puna");

	obj1.display();
	obj2.display();
	obj3.display();

	return 0;
}
  */
#include<iostream>
using namespace std;

class student
{
    private: string name;
         int age;
         string branch;
         string city;
    public:student(string name, int age, string branch, string city)
           {
              this->name=name;
              this->age=age;
              this->branch=branch;
              this->city=city;
           }
           void display()
           {
               cout<<"Student Name ="<<name<<endl;
               cout<<"Student Age ="<<age<<endl;
               cout<<"Student Branch ="<<branch<<endl;
               cout<<"Student City ="<<city<<endl;
           }
};

int main()
{
    student obj1=student("shwetav",22,"EEE","Noida");
    student obj2=student("niharika",23,"CSE","Mumbai");
    student obj3=student("sumit",21,"AIML","Chennai");

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
