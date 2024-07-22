#include<memory>
using namespace std;

void func()
{
	unique_ptr<int>ptr(new int (10));

	int x=20;

	//Create a new unique_ptr ptr2 and move the ownership of ptr to ptr2
	
	unique_ptr<int>ptr2=move(ptr);
	//ptr is now empty

	if(x==20)
		return ; //no memeory leak anyore

	//you dont't have to selete the pointer varibale ptr
        //the memeory will automatically be frees after the return statememt
}
int main()
{
	func();

	return 0;
}
