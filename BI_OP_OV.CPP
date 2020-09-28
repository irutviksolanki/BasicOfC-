#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int v1,v2;
	void get()
	{
		cout<<"Enter Value 1 :"<<endl;
		cin>>v1;
		cout<<"Enter Value 2 :"<<endl;
		cin>>v2;
	}

	void put()
	{
		cout<<"Value 1 : "<<v1<<endl;
		cout<<"Value 2 : "<<v2<<endl;
	}

      /*	A operator +(A &t);
       /*	{
		cout<<(this->v1+t.v1)<<endl;
		cout<<(v2+t.v2)<<endl;
	}*/

		friend A operator +(A &a1,A &a2);

};
/*A A::operator +(A &r)
{
	A temp;
	temp.v1=v1+r.v1;
	temp.v2=v2+r.v2;


	return temp;
} */





A operator +(A &r1,A &r2)
{
	     A temp;
	     temp.v1=r1.v1+r2.v1;
	     temp.v2=r1.v2+r2.v2;

	     return temp;
}
int main()
{
	clrscr();
	A a1;

	a1.get();

	A a2;
	a2.get();

	A a3;

	a3=a1+a2;


	a3.put();
	getch();
	return 0;


}
