#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//Empty vector
	vector<int>emptyvec;
	cout<<"Empty vector:"<<endl;

	if(emptyvec.empty())
	{
		cout<<"emptyvec vector is empty!"<<endl;
	}
	else{
		for(int elem:emptyvec)
		{
			cout<<elem<<"  ";
		}

		cout<<endl;
	}

	//Single element vector
	vector<int>singleelemvec={35};

	cout<<"Single element vector:"<<endl;

	if (singleelemvec.empty())
	{
		cout<<"Single element vector is empty!"<<endl;
	}
	else
	{
		for(int elem:singleelemvec)
		{
			cout<<elem<<" ";
		}
		cout<<endl;
	}

	//Multi-element vector
	vector<int>multielemvec={10, 15, 20, 25, 30};
        
        cout<<"Multi element vector:"<<endl;
        
        if (multielemvec.empty())
        {       
                cout<<"Multi element vector is empty!"<<endl;
        }       
        else
        {       
                for(int elem:multielemvec)
                {       
                        cout<<elem<<" ";
                }
                cout<<endl;
        }

	return 0;
}

