#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	public:

	int er_no;
	char name[20];
	public:
		Student()
		{
			er_no=1;
			strcpy(name,"ABC");
		}
		Student(int a,char p[])
		{
			er_no=a;
			strcpy(name,p);
		}

};
int main()
{

	clrscr();

	Student s1,s2(2,"PQR");
	Student s3=Student(3,"XYZ");

	cout<<"Er no is :"<<s1.er_no<<endl;
	cout<<"Name is :"<<s1.name<<endl;

	cout<<"Second : Er_no is :"<<s3.er_no<<endl;
	cout<<"Second : Name is :"<<s3.name<<endl;

	getch();
	return 0;
}