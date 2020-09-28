#include<iostream.h>
#include<conio.h>
class A
{
	int val;
	public:
		void get()
		{
			cout<<"Enter Value:"<<endl;
			cin>>val;
		}
		void put()
		{
			cout<<"Value is :"<<val;
		}

		void operator -()
		{
			val=-val;
		}

};
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