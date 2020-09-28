#include<iostream.h>
#include<conio.h>
class A
{       public:
	int a;
};
class B
{       public:
	int a;
};
class C: A,B
{

	public:
	void dis()
	{
		cout<<A::a;
	}

};
int main()
{
	clrscr();
	C c1;
	c1.dis();
	getch();
	return 0;
};