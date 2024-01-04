#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	//base case
	if(n==0)
		return 1;
	
	return n * factorial(n-1);
}

int main()
{
	int n;
	cin>>n;
	
	int ans = factorial(n);
	
	cout<<ans<<endl;
		
	return 0;
} 


--------------------------------------------------------------
  Why base class? -> Segmentation fault -> stack overflow
--------------------------------------------------------------
  
  int factorial(int n)
  {
	  //base case
	  cout<<n<<endl;
	
	  return n * factorial(n-1);
  }


