#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	public:
	int er_no;
	char name[20];


	Student()
	{
	     cout<<"Enter Er_no:"<<endl;
	     cin>>er_no;
	     cout<<"Enter Name :"<<endl;
	     cin>>name;
	}
	Student(int b=10)
	{
		er_no=b;

	}
	Student(int a,char b[]);


};
Student::Student(int c,char d[])
{
   er_no=c;
   strcpy(name,d);
}
int main()
{
	clrscr();
	Student s1;
	Student s4(2);
	Student s2(3,"PQR");
	Student s3=Student(4,"XYZ");

	cout<<"Er_no is :"<<s1.er_no<<endl;
	cout<<"Name is :"<<s1.name<<endl;


	cout<<"Er_no is :"<<s4.er_no<<endl;
	cout<<"Name is :"<<s4.name<<endl;


	cout<<"Er_no is :"<<s2.er_no<<endl;
	cout<<"Name is :"<<s2.name<<endl;



	cout<<"Er_no is :"<<s3.er_no<<endl;
	cout<<"Name is :"<<s3.name<<endl;

	getch();
	return 0;
}