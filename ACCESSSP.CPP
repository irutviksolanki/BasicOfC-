#include<iostream.h>
#include<conio.h>
/*void xyz()
{
	cout<<a;
}  */
class Demo
{
	int a;
	public:
		int b;
	protected:
		int c;

	public:
		void getData();
		void putData();
	private:
		void display()
		{
			cout<<"\n Hello"<<endl;
		}
};
class Demo2:Demo
{
	public:
		void print()
		{       b=2;
			c=3;
			cout<<" "<<b<<" "<<c;
		}
};
void Demo::getData()
{
	cout<<"Enter A:"<<endl;
	cin>>a;
	cout<<"Enter B:"<<endl;
	cin>>b;
	cout<<"Enter C:"<<endl;
	cin>>c;
}
void Demo::putData()
{
	display();
	cout<<"Value of A:"<<a<<endl;
	cout<<"Value of B:"<<b<<endl;
	cout<<"Value of C:"<<c<<endl;
}
int main()
{
	clrscr();
	Demo d;

	cout<<d.b;
      ///  d.display();
	d.getData();
	d.putData();

	Demo2 d2;
	d2.print();
	getch();
	return 0;
}