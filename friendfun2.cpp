#include<iostream>
using namespace std;

class travel
{
    private: int distance,speed;

    public: void set_values(int m, int n)
        {
            distance=m;
            speed=n;
        }
        friend double findtimetotravel(travel);
};

double findtimetotravel(travel t)
{
    double time=(double)t.distance/(double)t.speed;
    return time;
}

int main()
{
    travel obj1;

    obj1.set_values(80,30);

    cout<<"Time taken = "<<findtimetotravel(obj1)<<" Hours"<<endl;
   
    return 0;
}
