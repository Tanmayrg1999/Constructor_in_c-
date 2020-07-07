#include<iostream>
using namespace std;
class cons{
	private:
		int a,b,c;
	public:
		cons()
		{
			cout<<"1 st constructor called"<<endl;
		}
		cons(int a)
		{
			c=a;
			cout<<"2nd constructor called"<<endl;
			cout<<c<<endl;
		}
		cons(int a,int b)
		{
			c=a+b;
			cout<<"3rd constructor called"<<endl;
			cout<<c;
		}
};
int main()
{
	cons c1,c2(5),c3(3,4);
}
