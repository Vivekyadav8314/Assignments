#include<iostream>
using namespace std;

class evenodd
{
    private: int a;

    public: void input()
        {
            cout<<"Enter the number to check whether it is odd/even"<<endl;
            cin>>a;
        }
        friend int funcevenodd(evenodd);
};

int funcevenodd(evenodd b)
{
    if(b.a%2==0)
        return 1;
    else
        return 0;
}

int main()
{
    evenodd obj1;

    obj1.input();

    if(funcevenodd(obj1))
	       cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;

    return 0;
}
