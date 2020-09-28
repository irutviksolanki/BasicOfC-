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
			cout<<"Enter Er_no:"<<endl;
			cin>>er_no;
			cout<<"Enter Name :"<<endl;
			cin>>name;

		}
		Student(Student &temp)
		{
			er_no=2;
			strcpy(name,temp.name);
		}

};
int main()
{
	clrscr();

	Student s1;
	Student s2(s1);

	Student s3=s2;
	cout<<"Er _no is :"<<s3.er_no;
	cout<<"Name is :"<<s3.name;

	getch();
	return 0;
}
