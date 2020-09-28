#include<iostream.h>
#include<conio.h>
class A
{
	int val1,val2;
	public:
		void get()
		{
			cout<<"Enter Value1:"<<endl;
			cin>>val1;
			cout<<"Enter Value2:"<<endl;
			cin>>val2;
		}
		void put()
		{
			cout<<"Value is :"<<val1<<endl;
			cout<<"Value is :"<<val2<<endl;
		}

		A operator +(A &p)
		{       A temp;

		       temp.val1=(this->val1+p.val1);
			temp.val2=(val2+p.val2);

			return temp;
		}

};
int main()
{
	clrscr();

	A a1,a2,a3;


	a1.get();
	a2.get();
	a1.put();
	a2.put();

	a3=a1+a2;



	a3.put();
	getch();

	return 0;
}