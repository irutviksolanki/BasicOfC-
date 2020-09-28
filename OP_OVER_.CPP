#include<iostream.h>
#include<conio.h>
class A
{       public:

	int a;
	void get()
	{
		cout<<"Enter Val:"<<endl;
		cin>>a;
	}
	void put()
	{
		cout<<"Val : "<<endl;
	}


	friend void operator +(int r,A &e);
};


void operator +(int e,A &r)
{
	cout<<(e+r.a);
}
int main()
{
	clrscr();

	A a1;
	cout<<"Enter value :"<<endl;
	int i;
	cin>>i;

	a1.get();

	//a1+i;
	i+a1;
	getch();
	return 0;
}