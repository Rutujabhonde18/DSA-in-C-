int i=5;
    
    //create a ref variable
    int &j = i;
    
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

------------------------------------------

  void update(int &n)
{
	n++;			//value not changed
}

//pass by reference
void update2(int &n)
{
	n++;			////value changed
}

int main()
{   
    int n=5;
    cout<<"Before = "<<n<<endl;
    update2(n);
    cout<<"After = "<<n<<endl;
    
	return 0;
}

-------------------------------------------------------
   Return By Reference Variable (BAD PRACTICE)
-------------------------------------------------------

  int func(int a)
{
	int num = a;
	int & ans = num;
	return ans;
}

int * fun(int n)
{
	int * ptr = &n;
	return ptr;
}

int main()
{   
	int n=5;
    func(n);
    
	return 0;
}
