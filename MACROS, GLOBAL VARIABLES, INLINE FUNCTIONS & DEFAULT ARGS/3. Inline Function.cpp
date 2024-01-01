//Inline Fuction
int getMax(int& a, int& b){
	return(a>b) ? a : b;
}

int main()
{
	int a=1, b=2;
	int ans = 0;
	
	a = a + 3;
	b = b + 1;
	
	ans = getMax(a,b);
	cout<<ans<<endl;
		
	return 0;
} 
