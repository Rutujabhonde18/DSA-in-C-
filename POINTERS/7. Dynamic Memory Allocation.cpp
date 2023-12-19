int getSum(int *arr, int n)
{
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int main()
{   
	int n;
	cin>>n;
	
	//variable size array
	int *arr = new int[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
    
    int ans = getSum(arr, n);
    
    cout<<"Answer = "<<ans<<endl;
    
	return 0;
}

--------------------------

//static memory allocation
    while(true)
    {
    	int arr[50];
	}
    
    //dynamic memory allocation -> Program crashed
    while(true)
    {
    	int *arr = new int[n];
	}
