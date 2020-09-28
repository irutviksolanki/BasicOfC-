#include "iostream.h"
#include "conio.h"
class A
{
	int a;
	public:
		int b;
	protected:
		int c;
};
class B:protected A
{
	public:
		int d;
};
class C:public B
{
	int e;
	public:
		void get()
		{
			cout<<"Enter value for E:"<<endl;
			cin>>e;
			cout<<"Enter calue for D:"<<endl;
			cin>>d;
			cout<<"Enter value for B:"<<endl;
			cin>>b;
			cout<<"Enter value for C:"<<endl;
			cin>>c;
		}
		void put()
		{
			cout<<"Value is :"<<endl<<e<<endl<<d<<endl<<b<<endl<<c<<endl;
		}
};

int main()
{
	clrscr();
	cout<<"Hello";

	C c1;
	c1.get();
	c1.put();
	getch();
	return 0;
}