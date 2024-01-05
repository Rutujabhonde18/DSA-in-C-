void sayDigit(int n, string arr[])
{
	//base case
	if(n==0)
		return ;
		
	//procesing
	int digit = n%10;
	n = n/10;
	
	//recersive call
	sayDigit(n, arr);
	
	cout<<arr[digit]<<" ";
}

int main()
{
	string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	
	int n;
	cin>>n;
	
	sayDigit(n, arr);
	
	return 0;
}

--------------------------------------
  O/P
  -----------------
  423
four two three
