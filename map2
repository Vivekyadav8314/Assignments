#include<iostream>
#include<map>
using namespace std;

int main()
{
        map<int,string> student {{1,"Swetav"},{2,"Sumit"},{3,"Vivek"},{4,"Niharika"},{5,"Rutuja"}};

        map<int,string>::iterator itr;

        cout<<"student elements are..."<<endl;

        for(itr=student.begin();itr!=student.end();itr++)
        {
                cout<<itr->first<< " , "<<itr->second<<endl;
        }
        cout<<endl;

        //use itr to point to the first map element
        itr=student.begin();

        //remove the first element
        student.erase(itr);

        student.erase(4);

        cout<<"Final Map Values:"<<endl;

        for(itr=student.begin();itr!=student.end();itr++)
        {
                cout<<itr->first<<" "<<itr->second<<endl;
        }

        return 0;
}
