/*
#include<iostream>
using namespace std;

class array
{
	private: int a[100],m;

        public: 
		 void setnoofelements(int n)
		 {
			 m=n;
		 }
		 void readarray();
		 void displayarray();
};

void array::readarray()
{
	cout<<"Enter"<<m<<"array elements"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}

	void array::displayarray()
	{
		cout<<"Array elements are"<<endl;
		for(int i=0;i<m;i++)
		{
			cout<<a[i]<<endl;
		}
	}
	}

	int main()
	{
		int n;

		array obj1;

		cout<<"Enter the number of elements:"<<endl;
		cin>>n;

		obj1.setnoofelements(n);
		obj1.readarray();
		obj1.displayarray();

		return 0;
	}
	*/

#include<iostream>
using namespace std;

class array
{
    private:int a[100],m;

    public:
        void setnoofelements(int n)
        {
            m=n;
        }
        void readarray();
        void displayarray();
};

void array::readarray()
{
    cout<<"Enter "<<m<<" array elements"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
}
void array::displayarray()
{
    cout<<"Array elements are "<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<a[i]<<endl;
	   }
}

int main()
{
    int n;

    array obj1;

    cout<<"Enter the number of elements :"<<endl;
    cin>>n;

    obj1.setnoofelements(n);
    obj1.readarray();
    obj1.displayarray();

    return 0;
}
