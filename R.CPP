#include<iostream.h>
#include<conio.h>
int fa=1;
void fact(int n)
{
	if(n>=1)
	{
      fa=fa*n;
      n--;
      fact(n);
      }
}
int main()
{
	clrscr();
	int no;
	cout<<"Pls. Enter no:"<<endl;
	cin>>no;

	fact(no);

	cout<<"Fact is :"<<fa;
	getch();
	return 0;
}