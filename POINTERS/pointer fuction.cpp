#include<iostream>
using namespace std;

//pass by value
void print(int *p)
{
	cout<<*p<<endl;
}

void update(int *p)
{
	//p = p+1;
	//cout<<"inside = "<<p<<endl;
	*p = *p + 1;
}

int getSum(int arr[], int n)
{
	cout<<sizeof(arr)<<endl;
	
	int sum =0;
	for(int i=0; i<n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int main()
{
	int value = 5;
	int *p = &value;
	
	//print(p);
	
	cout<<"Before = "<<*p<<endl;
	update(p);
	cout<<"After = "<<*p<<endl;
	
	int arr[5] = {1,2,3,4,5};
	
	cout<<"Sum = "<<getSum(arr,5)<<endl;
	
	return 0;
}
