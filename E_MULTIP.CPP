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
class B:virtual public A
{
	int b;

};
class C:public virtual A
{
	int c;
};

class D:public B,public C
{
	public:
		void print()
		{
			dis();
		}
};




int main()
{
	clrscr();

	D d1;
	d1.print();
	getch();
	return 0;
}