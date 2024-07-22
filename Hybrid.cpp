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

// Base class: Astronaut
class Astronaut 
{
    public:void spacewalk() 
    {
        cout << "Performing a spacewalk..." << endl;
    }
};

// Intermediate class: SpaceStation inherits from Space
class SpaceStation : public Space
{
    public:void dock() 
	    {
        cout << "Docking at the space station..." << endl;
    }
};
// Derived class: SpaceShuttle inherits from SpaceStation and Astronaut
class SpaceShuttle : public SpaceStation, public Astronaut
{
    public:void launch()
    {
        cout << "Launching into space..." << endl;
    }
};

int main()
{
    SpaceShuttle obj1;
    obj1.orbit(); // Inherited from SpaceObject
    obj1.dock(); // Inherited from SpaceStation
    obj1.spacewalk(); // Inherited from Astronaut
    obj1.launch(); // Own method

    return 0;
}
