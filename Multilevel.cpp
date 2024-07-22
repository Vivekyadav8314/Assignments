#include <iostream>
using namespace std;

// Base class: Space
class Space 
{
    public:void orbit() 
    {
        cout << "The area directly outside of Earth's atmosphere." << endl;
    }
};

// Intermediate class: Planet inherits from Space
class Planet : public Space 
{
    public:void rotate() 
    {
        cout << "A planet is a celestial body that is in orbit around the Sun " << endl;
    }
};

// Derived class: Earth inherits from Planet
class Earth : public Planet 
	      {
    public:void supportLife()
    {
        cout << "Earth is the third planet from the Sun and the only astronomical object known to harbor life." << endl;
    }
};

int main()
{
    Earth obj1;
    obj1.orbit(); // Inherited from SpaceObject
    obj1.rotate(); // Inherited from Planet
    obj1.supportLife(); // Own method

    return 0;
}
