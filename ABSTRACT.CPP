#include<iostream.h>
#include<conio.h>
class Student
{
	public:
	int er_no;
	char name[20];
	public:
	       virtual void getData()=0;
		void putData()
		{
			cout<<"Value is :"<<er_no<<endl;
			cout<<"Name is :"<<name<<endl;
		}
};

class Imp:public Student
{
	public:

     void getData()
     {
       cout<<"Enter Er_no:"<<endl;
	cin>>er_no;
	cout<<"Enter Name:"<<endl;
	cin>>name;
     }

};
int main()
{
	clrscr();


	Imp i1;

	i1.getData();
	i1.putData();
	getch();
	return 0;

}