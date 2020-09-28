#include<iostream.h>
#include<conio.h>
class Student
{
	int a,b;
	public:
	void getData(int a,int b)
	{
	   this->a=20;
	   this->b=b;
	   cout<<"value of member a:"<<this->a<<endl;
	   cout<<"value of member b:"<<this->b<<endl;
	}
};
int main()
{
	clrscr();
	Student s1;
	s1.getData(10,20);
	getch();
	return 0;
}