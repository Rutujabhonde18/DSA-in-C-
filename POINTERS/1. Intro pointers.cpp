#include<iostream>
using namespace std;

int main()
{
	int num = 5;
	
	cout<<num<<endl;
	
	//Address of Operator
	cout<<"Adress of num = "<<&num<<endl;
	
	//Access of pointer
	int *ptr = &num;
	
	cout<<"Value = "<<*ptr<<endl;
	cout<<"Address = "<<ptr<<endl;
	cout<<"Value = "<<&num<<endl;
	cout<<"Address = "<<num<<endl;
	
	double d = 3.14;
	double *p2 = &d;
	
	cout<<"Value = "<<*p2<<endl;
	cout<<"Address = "<<p2<<endl;
	
	cout<<"Size of integer = "<<sizeof(num)<<endl;
	cout<<"Size of integer = "<<sizeof(ptr)<<endl;
	cout<<"Size of integer = "<<sizeof(p2)<<endl;
	
	return 0;
}
