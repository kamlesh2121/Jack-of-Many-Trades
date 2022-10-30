#include<iostream>
using namespace std;
class ABC;
 class XYZ
{

 	public:
 		void getdata(int i)
 		{
 			x=i;
		 }
 	friend void max(XYZ,ABC);
	int x;  
 };
  class ABC
 {
 	
 	int a;
 	public:
 		void getdata(int i)
 		{
 			a=i;
		 }
 	friend void max(XYZ,ABC);
 };
 void max(XYZ m,ABC n)
 {
  {
  	if(m.x>=n.a)
  	cout<<m.x;
  	else
  	cout<<n.a;
  }
}
  
  int main()
  {
  	XYZ obj1;
	 ABC obj2;
  	obj1.getdata(5);
  	obj2.getdata(25);
  	max(obj1,obj2);
   return 0;
  }
