#include<iostream>
using namespace std;
class A
{
	protected:
		int d;
		
		public:
			
			A(int a)
			{
				d = a;
			}
};
class B : public A
{
	private:
		int f;
		
		public:
			
			B(int a,int b): A(a)
			{
				f = b;
			}
			void print_data ()
			{
				cout<<" Data in data member of A "<<d<<endl;
				
				cout<<" Data in data member of B "<<f<<endl;
			}
};
int main ()
{
	B obj(3,4);
	obj.print_data ();
}
