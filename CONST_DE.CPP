#include<iostream.h>
#include<conio.h>
void inc_dec(int a,int b)
{
	a++;
	b--;
	cout<<"A is :"<<a<<endl;
	cout<<"B is :"<<b<<endl;
}

int main()
{
	clrscr();
	inc_dec(10,10);
	getch();
	return 0;

}