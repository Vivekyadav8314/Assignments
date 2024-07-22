#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v={1, 2, 3, 4, 5};

	cout<<"First Elements: "<<v[0]<<endl;
	cout<<"Second elements: "<<v.at(1)<<endl;
	cout<<"Second elements: "<<v.at(2)<<endl;
        cout<<"Second elements: "<<v.at(3)<<endl;
        cout<<"Second elements: "<<v.at(4)<<endl;
       // cout<<"Second elements: "<<v.at(5)<<endl;
      //  cout<<"Second elements: "<<v.at(6)<<endl;

	return 0;
}

