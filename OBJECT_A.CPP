#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	int er_no;
	char s_name[20];
	public:
	char c_name[20];
	public:
		void getData()
		{
			cout<<"Enter Er_No:"<<endl;
			cin>>er_no;
			cout<<"Enter S _name:"<<endl;
			cin>>s_name;
			cout<<"Enter C _name:"<<endl;
			cin>>c_name;
		}
		void putData()
		{
			cout<<"Er no is :"<<er_no<<endl;
			cout<<"Name is :"<<s_name<<endl;
			cout<<"College Name is:"<<c_name<<endl;
		}
};
void print(Student &s)
{
	strcpy(s.c_name,"GP");
       s.putData();
}
int main()
{
	clrscr();

	Student s1;
	s1.getData();

	print(s1);




	s1.putData();
	getch();

	return 0;


}