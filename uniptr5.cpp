#include <iostream>
#include <memory>
using namespace std;

class Shape 
{
    public:virtual void draw() = 0;
};

class Circle : public Shape 
{
    public:void draw() override 
    {
    cout << "Drawing a circle." <<endl;
    }
};

class Rectangle : public Shape 
{
    public:void draw() override 
    {
        cout << "Drawing a rectangle." <<endl;
    }
};

int main() 
{
	//Using unique pointer with polymorphism
    unique_ptr<Shape> shape1 = make_unique<Circle>();
    unique_ptr<Shape> shape2 = make_unique<Rectangle>();

    shape1->draw(); // Outputs: Drawing a circle.
    shape2->draw(); // Outputs: Drawing a rectangle.

    return 0;
}

    
