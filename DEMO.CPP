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
		static void change(){
			    cout<<"Enter Colllege"<<endl;
			    cin>>c_name;

		}


};

char Student::c_name[]="LeCollege\0";
void Student::getData()
{
	clrscr();
	cout<<endl<<"Enter Er_no:"<<endl;
	cin>>er_no;
	cout<<"Enter Student Name:"<<endl;
	cin>>name;
	//c_name[10]={'L','E'};
}

void Student::putData()
{
	clrscr();
	cout<<"Er No : "<<er_no;
	cout<<"Name is :"<<name<<endl;
	cout<<"College is :"<<c_name;
}
int main()
{

	clrscr();
	Student s1;

	s1.getData();
	s1.putData();
	Student::change();
	s1.putData();
     //	cout<<"Name is :"<<Student::c_name;
	getch();
	return 0;
}
