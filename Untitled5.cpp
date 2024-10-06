#include <iostream>
using namespace std;
int main()
{
  int tempareture;
  cout<<"enter the degree";
  cin>>tempareture;
  if (tempareture>50)
  {
  	cout<<"very hot";
  	
  }
   else if (tempareture>30)
  {
  	cout<<"hot";
  	
  }
   else if (tempareture>20)
  {
  	cout<<"lite hot";
  	}
  	 else if (tempareture>10)
  {
  	cout<<"lite cold";
  	}
  	 else if (tempareture>0)
  {
  	cout<<"cold";
  	}
}