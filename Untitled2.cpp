#include <iostream>
using namespace std ;
int main()
{
	int attendence;
	cout<<"enter your attendence persentage";
	cin>>attendence;
	if (attendence>=75)
{
	cout<<"you are elidble for exam ";
}
    else if (attendence>100)
    {
    	cout<<"wrong input";
	}
	else if ( attendence<75)
	{
		cout<<"your not elidble for exam";
	}
	
}