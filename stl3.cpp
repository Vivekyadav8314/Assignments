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

	//Addding elements into empty vector
	emptyvec.push_back(11);
	emptyvec.push_back(22);

	cout<<"Empty vector emptyvec after adding elements are.."<<endl;

	for(int elem:emptyvec)
	{
		cout<<elem<< " ";
	}
	cout<<endl;

        //Single element vector
        vector<int>singleelemvec={50};

        cout<<"Single element vector:"<<endl;

        for (int elem:singleelemvec)
        {
                cout<<elem<<"  ";
        }
	cout<<endl;

        //Adding elements into single elements vector
	singleelemvec.push_back(55);
	singleelemvec.push_back(60);

	cout<<"Single elements vector after adding element are..."<<endl;
	
         for(int elem:singleelemvec)
                {
       
       			cout<<elem<<" ";

		}

	cout<<endl;

        //Multi-element vector
        vector<int>multielemvec={10, 15, 20, 25, 30};

        cout<<"Multi element vector:"<<endl;
                for(int elem:multielemvec)
                {
                        cout<<elem<<" ";
                }
                cout<<endl;
        
        //Adding elements into multi elements vector
        multielemvec.push_back(58);
        multielemvec.push_back(68);

        cout<<"Multi elements vector after adding element are..."<<endl;

         for(int elem:multielemvec)
                {

                        cout<<elem<<" ";

                }

        cout<<endl;




        return 0;
}

                      
