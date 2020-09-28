#include<iostream.h>
#include<conio.h>
class A
{
	public:
		int a;
		void dis()
		{
			cout<<"class A"<<endl;
		}
};
class C
{
	public:
		int c;
		void dis()
		{
			cout<<"class C"<<endl;
		}

};
class B:public C,A
{
	public:
		int b;
		void print()
		{
			dis();
		}
};

int main()
{
	clrscr();
	B b1;
	b1.print();

	getch();

	return 0;
}









