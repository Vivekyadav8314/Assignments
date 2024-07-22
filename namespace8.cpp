#include <iostream>
#include <string>
using namespace std;

// Namespace for Book Manager
namespace Bookmanager 
{
    const int MAX_BOOKS = 100;
    string books[MAX_BOOKS];
    int bookCount = 0;

    void addBook(const string& title) 
    {
        if (bookCount < MAX_BOOKS) 
	{
            books[bookCount++] = title;
            cout << "Book Added: " << title <<endl;
        } else 
	{
            cerr << "Error: Maximum books limit reached." << endl;
        }
    }

    void removeBook(const string& title) 
    {
        for (int i = 0; i < bookCount; ++i) 
	{
            if (books[i] == title) 
	    {
                cout << "Book Removed: " << title <<endl;

                // Shift elements to fill the gap
                for (int j = i; j < bookCount - 1; ++j) 
		{
			 books[j] = books[j + 1];
                }
                --bookCount;

                return ;
            }
        }
        cerr << "Error: Book not found." <<endl;
    }

    void displayBooks() 
    {
        cout << "Display Books in Library:" <<endl;
        for (int i = 0; i < bookCount; ++i) 
	{
            cout << books[i] <<endl;
        }
    }
}

// Namespace for Member Manager
namespace Membermanager 
{
    const int MAX_MEMBERS = 100;
    string members[MAX_MEMBERS];
    int memberCount = 0;
     void addMember(const string& name) 
     {
        if (memberCount < MAX_MEMBERS) 
	{
            members[memberCount++] = name;
            cout << "Member Added: " << name <<endl;
        } 
	else 
	{
            cerr << "Error: Maximum members limit reached." << endl;
        }
    }

    void displayMembers() 
    {
        cout << "Display Members:" << endl;
        for (int i = 0; i < memberCount; ++i) 
	{
            cout << members[i] << endl;
        }
    }
}

int main() 
{
    using namespace Bookmanager;
    using namespace Membermanager;

    // Adding books
    addBook("1988 by Chetan Bhagat");
    addBook("C by Balaguruswamy");

    // Adding members
    addMember("Allan");
    addMember("Bob");

    // Displaying books
    displayBooks();

    // Displaying members
    displayMembers();

    // Removing a book
    removeBook("1988 by Chetan Bhagat");

    // Displaying books again
    displayBooks();

    return 0;
}
