#include<iostream>
using namespace std;

int main()
{
	int i = 5;
	int *p = &i;
	int **p2 = &p;
	
	cout<<"Sahi chalat ahe"<<endl;
	
	cout<<"i = "<<i<<",	"<<"Address = "<<&i<<endl;
	cout<<"p = "<<p<<",	"<<"Address = "<<&p<<endl;
	cout<<"p2 = "<<p2<<",	"<<"Address = "<<&p2<<endl;
	
	//gives 5 
	cout<<i<<endl;
	cout<<*p<<endl;
	cout<<**p2<<endl;   
	
	//gives p ke andar ki value
	cout<<&i<<endl;
	cout<<p<<endl;
	cout<<*p2<<endl;
	
	//gives p2 ke andar ki value
	cout<<&p<<endl;
	cout<<p2<<endl;
	
	return 0;
}
