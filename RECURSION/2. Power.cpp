#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
	//base case
	if(n==0)
		return 1;
	
	return 2 * power(n-1);
}

int main()
{
	int n;
	cin>>n;
	
	int ans = power(n);
	
	cout<<ans<<endl;
		
	return 0;
} 


------------------------------------------
    Head Recursion ->  1 - n
------------------------------------------

void print(int n)
{
	//base case
	if(n == 0){
		return ;
	}
	
	//recursive relation 
	print(n-1);
	
	cout<<n<<endl;
}


------------------------------------------
    Tail Recursion ->  n - 1
------------------------------------------

void print(int n)
{
	//base case
	if(n == 0){
		return ;
	}
	
	cout<<n<<endl;
	//recursive relation 
	print(n-1);
	
}
