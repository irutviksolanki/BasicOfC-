#include<iostream.h>
#include<conio.h>
void add(int,int);      //formal argument

int main()
{
	clrscr();
	int a,b;
	cout<<"Enter A:"<<endl;
	cin>>a;
	cout<<"Enter B:"<<endl;
	cin>>b;
	add(a,b);//actual argument

	cout<<"Value of Actuaal A is :"<<a<<endl;
	cout<<"Value of Actual B is :"<<b<<endl;
	getch();
	return 0;
}
void add(int a,int b) // formal argument
{
	a--;
	b++;
	cout<<"Value of Fromal A is :"<<a<<endl;
	cout<<"value of Formal B is :"<<b<<endl;
}

