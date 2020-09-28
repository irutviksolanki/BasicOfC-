#include<iostream.h>
#include<conio.h>
class A
{
	public:
		int a;
		void get()
		{
			cout<<"Enter A:"<<endl;
			cin>>a;
		}
		void put()
		{
			cout<<"Value of A:"<<a<<endl;
		}
};
int main()
{
	clrscr();
	A a1;


	A *p;
	p=&a1;

	a1.get();
	//(*p).get();
	p->put();
	//a1.get();
	//a1.put();


	//int A:: *p;


       //	p=&A::a;

       //	a1.get();

       //	cout<<a1.*p;

	getch();
	return 0;
}