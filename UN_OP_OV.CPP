#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int v1,v2;
	void get()
	{
		cout<<"Enter Value 1 :"<<endl;
		cin>>v1;
		cout<<"Enter Value 2 :"<<endl;
		cin>>v2;
	}

	void put()
	{
		cout<<"Value 1 : "<<v1<<endl;
		cout<<"Value 2 : "<<v2<<endl;
	}

	friend void operator ++(A &t);


};
/*void A::operator ++()
{

	++v1;
	++v2;
} */

	void operator ++(A &t)
	{
		++t.v1;
		++t.v2;

	}


int main()
{
	clrscr();
	int a=10;
	cout<<++a<<endl;
	A a1;

	a1.get();
	a1.put();

	a1++;

	a1.put();
	getch();
	return 0;


}
