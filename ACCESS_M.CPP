#include<iostream.h>
#include<conio.h>
class Depa
{
	int a;
	protected:
		int b;
	public:
		int c;
};
class Student:protected Depa
{

	int b;

	public:
		Depa::b
		void getData()
		{
			cout<<"Enter two\ value:"<<endl;
		//	cin>>a;
			cin>>b;
			cin>>c;
		}


};
int main()
{
	clrscr();

	Student s1;
	s1.getData();

	cout<<"Vlue of B is :"<<s1.b<<endl;
	cout<<"Value of C is :"<<s1.c<<endl;

	getch();
	return 0;
}