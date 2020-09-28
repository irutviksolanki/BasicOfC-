#include<iostream.h>
#include<conio.h>
class C
{
     public:
	C(int x,int y)
	{
		cout<<"add is :"<<x+y;
	}

};
class A
{
	public:
		A(int x)
		{
			cout<<"Hello "<<x<<endl;
		}
};
class B:A,C
{
	public:

	B():A(10),C(10,20)

	{
	     cout<<"Good";
	}

};
int main()
{
	clrscr();

	B b1;

	getch();
	return 0;
}