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

	//Bad Practice
	//Pointer to int is created and pointing to some garbage address
	int *p;
	cout<<*p<<endl;
	
	//Segmentation fault -> Null ahe that's why
	int *p2 = 0;
	cout<<*p2<<endl;
	
	int i=5;
	//both give same output
	int *q = &i;
	cout<<q<<endl;
	cout<<*q<<endl;
	
	int *p = 0;
	p = &i;
	cout<<p<<endl;
	cout<<*p<<endl;
	
	//increment num
	int num = 5;
	int a = num;
	cout<<"Before "<<num<<endl;
	a++;
	cout<<"After "<<num<<endl;  	//-> not increment
	
	int *p = &num;
	cout<<"Before "<<num<<endl;
	(*p)++;
	cout<<"After "<<num<<endl;		//-> increment
	
	//copint pointer
	
	int *q = p;
	cout<<p<<" - "<<q<<endl;
	cout<<*p<<" - "<<*q<<endl;
	
	//Arithmetic Addition
	int i=3;
	int *t = &i;
	//cout<<(*t)++<<endl;	-> Not increment
	*t = *t +1;				//-> Not increment
	cout<<*t<<endl;
	
	cout<<t<<endl;
	t = t +1;				
	cout<<t<<endl;
	
	return 0;
}
