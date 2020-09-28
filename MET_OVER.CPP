#include<iostream.h>
#include<conio.h>
class Depa
{
  public:
	void dis()
	{
		cout<<"Hello"<<endl;
	}

};
class B
{      public:
	void demo()
	{
		cout<<"class b";
	}
};
class Student:public Depa,public B
{
	int er_no;
	public:
	void dis()
	{
		cout<<"good";
	}


};
int main()
{
	clrscr();

	Student s1;
	s1.dis();
	s1.demo();
	s1.Depa::dis();
	getch();
	return 0;
}