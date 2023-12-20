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


--------------------------------------
	Dynamic 2D ARRAY
--------------------------------------

int row, col;
	cin>>row;
	cin>>col;
	
	//creating a 2D array
	int **arr = new int*[row];
	for(int i=0; i<row; i++)
	{
		arr[i] = new int[row];
	}
    
    //taking input
    for(int i=0; i<row; i++)
    {
    	for(int j=0; j<col; j++)
    	{
    		cin>>arr[i][j];
		}
	}
	
	//printing output
    for(int i=0; i<row; i++)
    {
    	for(int j=0; j<col; j++)
    	{
    		cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//Releasing Memory
	for(int i=0; i<row; i++)
    {
    	delete [] arr[i];
	}
	delete []arr;
