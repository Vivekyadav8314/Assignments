/*
#include<iostream>
using namespace std;

templet <typename T> void bubblesort(T a[], int n)
{
	for(int i=0;i<n-1;i++)
		for(int(j=n-1;i<j;j--)
				if(a[j]<a[j-1])
				swap(a[j],a[j-1]);
}

int main()
{
*/
#include<iostream>
using namespace std;

template <typename T> void bubblesort(T a[], int n)
{
        for(int i=0;i<n-1;i++)
                for(int j=n-1;i<j;j--)
                        if(a[j]<a[j-1])
                                swap(a[j],a[j-1]);
}

int main()
{
        int a[5]={10,50,90,80,15};
        int n=sizeof(a)/sizeof(a[0]);

        bubblesort<int>(a,n);

        cout<<"Sorted Array...."<<endl;
        for(int i=0;i<n;i++)
        {
                cout<<a[i]<<" ";
        }
        cout<<endl;

        return 0;
}
