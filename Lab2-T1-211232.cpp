#include <iostream>

using namespace std;

int main() 
{
	int x1,y1,x2=0,y2=0;
	cout<<"\nEnter the coordinate of x1 : "; cin>>x1;
	cout<<"\nEnter the coordinate of y1 : "; cin>>y1;
	int distance;
	distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	cout<<"\n\nDistance between coordinate is : "<<distance;
	cout<<"\n\n***********************************************";
	
	return 0;
}
