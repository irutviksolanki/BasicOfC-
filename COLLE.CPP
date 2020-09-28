#include<iostream.h>
#include<conio.h>
class Student
{
	int er_no;
	char name[10];
	public:
	static char c_name[10];

	public:
		void getData();
		void putData();


};

char Student::c_name[]="Le College";
void Student::getData()
{

	cout<<"Enter Er_no:"<<endl;
	cin>>er_no;
	cout<<"Enter Student Name:"<<endl;
	cin>>name;
	//c_name[10]={'L','E'};
}

void Student::putData()
{
	cout<<"Er No : "<<er_no;
	cout<<endl<<"Name is :"<<name<<endl;
	cout<<"College is :"<<c_name<<endl;
}
int main()
{
	clrscr();
	Student s1;

	s1.getData();
	s1.putData();
	cout<<"Name is :"<<Student::c_name;
	getch();
	return 0;
}
