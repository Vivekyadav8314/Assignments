#include<iostream>
using namespace std;

int count=0;

class test
{
    public:test()
           {
               count++;
               cout<<"Total number of object(s) created are "<<count<<" times"<<endl;
           }

           ~test()
           {
               cout<<"Total number of object(s) destroyed are "<<count<<" times"<<endl;
               count--;
           }
};

int main()
{
    test t1,t2,t3,t4,t5,t6;

    return 0;
}
