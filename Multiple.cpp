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

// Base class: Astronaut
class Astronaut 
{
    public:void spacewalk() 
    {
        cout << "An astronaut is someone who travels in space. " << endl;
    }
};

// Derived class: SpaceSuit inherits from Space and Astronaut
class SpaceSuit : public Space, public Astronaut 
		  {
    public:void protect()
    {
        cout << "Protecting the astronaut." << endl;
    }
};

int main()
{
    SpaceSuit obj1;
    obj1.orbit(); // Inherited from Space
    obj1.spacewalk(); // Inherited from Astronaut
    obj1.protect(); // Own method

    return 0;
}
