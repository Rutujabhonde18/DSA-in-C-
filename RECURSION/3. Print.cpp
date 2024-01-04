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
