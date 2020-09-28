#include<iostream.h>
#include<conio.h>
class B
{
	int a;
	public:
		virtual void dis()
		{
			cout<<"Hello"<<endl;
		}

	       virtual ~B(){

		}

};
class D:public B
{

	public:
		int a;
		void dis()
		{
			cout<<"Good"<<endl;
		}

};

int main()
{
	clrscr();

	D d1;

	B b1;

	B *p;



	p=&b1;


	p->dis();


	p=&d1;
	p->dis();















	getch();


	return 0;
}
