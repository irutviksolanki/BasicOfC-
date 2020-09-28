#include<iostream.h>
#include<conio.h>
class Student
{
	int er_no;
       static char c_name[20];
	public:
		void getData()
		{
			cout<<"Enter er_no:"<<endl;
			cin>>er_no;
			cout<<"Enter C name:"<<endl;
			cin>>c_name;
		}
		void putData()
		{
			cout<<"Er no is :"<<er_no<<endl;
			cout<<"C Name is:"<<c_name<<endl;
		}
	      static void display()
		{
			cout<<" College NAME IS:"<<er_no;
		}
};
char Student :: c_name[20]="LE";
int main()
{
	clrscr();

	Student::display();

	Student s1,s2;
	s1.getData();
	s1.putData();
	s2.putData();

	getch();
	return 0;
}