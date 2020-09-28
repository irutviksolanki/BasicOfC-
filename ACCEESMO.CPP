#include<iostream.h>
#include<conio.h>
class S
{
	int a;
	public:
		int b;
	protected:
		int c;

	private:
		void display();
	public:
		void get();
		void call()
		{
			display();
			put();
		}
	protected:
		void put();
};
void S::display()
{

	cout<<"Hello"<<endl;
}
void S::get()
{
	cout<<"Etnter A:"<<endl;
	cin>>a;
	cout<<"Enter B:"<<endl;
	cin>>b;
	cout<<"Enter C:"<<endl;
	cin>>c;
}
void S::put()
{
   cout<<"Value of A:"<<a<<endl;
   cout<<"Value of B:"<<b<<endl;
   cout<<"Value of C:"<<c<<endl;
}
class P:S
{
	public:
		void callput()
		{
		      put();
		}
};
int main()
{
	clrscr();
	S s1;
       //	s1.display();
	s1.get();
      //	s1.put();

	s1.call();

	P p1;
	p1.callput();

	getch();
	return 0;
}
