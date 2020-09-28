#include<iostream.h>
#include<conio.h>
class Student
{
	static int count;
	public:
		Student()
		{
			count++;
			cout<<count<<" Object is created"<<endl;
		}
		~Student()
		{
			count--;
			cout<<count<<" Object is remaining"<<endl;
		}


};
int Student::count=0;
int main()
{
	clrscr();
	{
	Student s1;

	Student s2;
	Student s3;



	{
		Student s4;
			{
				Student s5;
			}
	}
	}
	getch();
	return 0;
}