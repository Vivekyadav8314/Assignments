#include<iostream>
using namespace std;

// Base class: Space
class Space
{
    public:void orbit()
    {
        cout << "Orbiting in space..." << endl;
    }
};

// Single Level Inheritance: Planet inherits from Space
class Planet : public Space
{
    public:void rotate()
    {
        cout << "Rotating on its axis..." << endl;
    }
};
int main()
{
    Planet obj;
    obj.orbit();
    obj.rotate();

    return 0;
}
