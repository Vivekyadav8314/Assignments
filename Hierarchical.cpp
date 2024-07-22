#include <iostream>

using namespace std;

// Base class: Space
class Space 
{
    public:void orbit() 
    {
        cout << "Orbiting in space..." << endl;
    }
};

// Intermediate class: Planet inherits from Space
class Planet : public Space 
{
    public:void rotate() 
    {
        cout << "Rotating on its axis..." << endl;
    }
};

// Derived class: Earth inherits from Planet
class Earth : public Planet
{
    public:void supportLife()
    {
        cout << "Supporting life..." << endl;
    }
};
// Derived class: Moon inherits from Planet
class Moon : public Planet {
public:
    void eclipse() {
        cout << "Eclipsing the sun..." << endl;
    }
};

int main() {
    Earth obj1;
    obj1.orbit(); // Inherited from Space
    obj1.rotate(); // Inherited from Planet
    obj1.supportLife(); // Own method

    Moon obj2;
    obj2.orbit(); // Inherited from Space
    obj2.rotate(); // Inherited from Planet
    obj2.eclipse(); // Own method

    return 0;
}
