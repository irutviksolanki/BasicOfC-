#include<iostream.h>
#include<conio.h>
class Faculty;
class Student
{
	int er_no;
	char s_name[20];
	char c_name[20];
	public:
		void getData()
		{
			cout<<"Enter Er_no:"<<endl;
			cin>>er_no;
			cout<<"Enter S Name:"<<endl;
			cin>>s_name;
			cout<<"Enter C Name:"<<endl;
			cin>>c_name;
		}

		friend void dis_depa(Student s,Faculty f);
};
class Faculty
{
	char f_name[20];
	char c_name[20];

	public:
		void getData()
		{
			cout<<"Enter F Name:"<<endl;
			cin>>f_name;
			cout<<"Enter C Name:"<<endl;
			cin>>c_name;
		}
		friend void dis_depa(Student s,Faculty f);
};


void dis_depa(Student s,Faculty f)
{
	cout<<"Student's C_Name is "<<s.c_name;
	cout<<"Faculty's C_name is "<<f.c_name;
}
int main()
{
	clrscr();
	Student s1;
	s1.getData();

     Faculty f1;
     f1.getData();

	dis_depa(s1,f1);
	getch();
	return 0;
}