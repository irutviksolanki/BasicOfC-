#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:

		A()
		{
			cout<<"Class A"<<endl;
		}

		int b;


};
class B:A
{
	int c;
	public:
		B()
		{
			cout<<"Class B"<<endl;
		}
		void getData()
		{
			cout<<"Enter B:"<<endl;
			cin>>b;
			cout<<"Enter C:"<<endl;
			cin>>c;
		}
		void putData()
		{
			cout<<"Value of B is :"<<b<<endl;
			cout<<"Value of C is :"<<c<<endl;
		}
};
int main()
{
	clrscr();

	B b1;
	b1.getData();
	b1.putData();

	getch();
	return 0;
}