#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void dis()
		{
			cout<<"Hello"<<endl;
		}
};
class B:public A
{
	public:

		void dis()
		{
		   cout<<"good:"<<endl;
		}
};
int main()
{
	clrscr();
	B b1;
	b1.dis();

	b1.A::dis();
	getch();
	return 0;
}