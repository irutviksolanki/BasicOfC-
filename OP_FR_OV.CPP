#include<iostream.h>
#include<conio.h>
class A
{
	int val1,val2;
	public:
		void get()
		{
			cout<<"Enter Value1:"<<endl;
			cin>>val1;
			cout<<"Enter Value2:"<<endl;
			cin>>val2;
		}
		void put()
		{
			cout<<"Value is :"<<val1<<endl;
			cout<<"Value is :"<<val2<<endl;
		}
		friend void operator -(A &p);
};

void operator -(A &p)
{
	p.val1=-p.val1;
	p.val2=-p.val2;
}
int main()
{
	clrscr();

	A a1;


	a1.get();
	a1.put();


	-a1;

	a1.put();



	getch();

	return 0;
}