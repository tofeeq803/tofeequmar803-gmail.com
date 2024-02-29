#include<iostream>
using namespace std;
class A
{
	protected:
		int d;
		
		public:
			void set_data ()
			{
				d = 444;
			}
};
class B
{
	protected:
		int f;
		
		public:
			void set_data1 ()
			{
				f = 333;
			}
};
class C:public A,public B
{
	int g;
	
	public:
		void set_data2 ()
		{
			set_data ();
			set_data1 ();
			
			g = 767;
		}
		void print_data ()
		{
			cout<<"Data in data member of A"<<d<<endl;
			cout<<"Data in data member of B"<<f<<endl;
			cout<<"Data in data member of C"<<g<<endl;
		}
};
int main ()
{
	C obj;
	
	obj.set_data2 ();
	obj.print_data ();
}
