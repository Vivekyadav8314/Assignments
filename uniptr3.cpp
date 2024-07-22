#include<iostream>
using namespace std;
#include<memory>

class myclass
{
	public:myclass()
	       {
		       cout<<"Constructor Called"<<endl;
	       }

	       ~myclass()
	       {
		       cout<<"Destructor Called"<<endl;
	       }

	       void display()
	       {
		       cout<<"Hello from unique ptr"<<endl;
	       }
};
/* Takeownership is a function that takes unique ptr as Perameter
 Inside the function, dispaly method of the myclass instance managemed by ptr is called 
 which prits Hello from unique pointer to the console
 WHne the function scope ends, ptr goes of the scop, and destructor for myclass object is called.
 */
void takeownership(unique_ptr<myclass> ptr)
{
	ptr->display();
}
/*unique_ptr<myclass> ptr3<new myclass()); This line creates unique ptr named ptr3  that manages a dynamically allocated myclass object.
 using unique ptr, it ensure that the memory is automatically released when the pointer goes out of scope, preventing memory leakes
 
 */
int main()
{
	unique_ptr<myclass> ptr3(new myclass());

	//THsi line transfer the ownership of the myclass instance from ptr3 to the function takeownersdip using move() function
	//After the call to takeownership, ptr3 become null, as it no longer owns the myclass instance.
	takeownership(move(ptr3));

	return 0;
}

