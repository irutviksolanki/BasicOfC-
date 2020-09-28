#include<iostream.h>
#include<conio.h>
class A
{       public:
		int a;
		A()
		{
			a=10;
			cout<<"Class A:"<<endl;
		}
};
class B
{
	public:
		int b;
		B()
		{
			b=20;
			cout<<"Class B:"<<endl;
		}
};
class C
{
	public:
		int c;
		C()
		{
			c=30;
			cout<<"Class C:"<<endl;
		}
};
class D:public A,public B,public C
{


	public:
		void dis()
		{
		     cout<<a<<endl;
		     cout<<b<<endl;
		     cout<<c<<endl;
		}

};



int main()
{
	clrscr();
	D d1;

	d1.dis();



	getch();
	return 0;
}