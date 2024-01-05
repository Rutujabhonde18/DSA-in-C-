void reachHome(int src, int dest)
{
	cout<<"source "<<src<<" destination "<<dest<<endl;
	//base case
	if(src == dest)
	{
		cout<<" pohoch gya"<<endl;
		return;
	}
	
	//procesing - ek step age badhao
	src++;
	
	//recurive call
	reachHome(src, dest);
}

int main()
{
	int dest = 10;
	int src = 1;
	
	cout<<endl;
	
	reachHome(src, dest);
	
	return 0;
}

-----------------------------------------------
  O/P = 
source 1 destination 10
source 2 destination 10
source 3 destination 10
source 4 destination 10
source 5 destination 10
source 6 destination 10
source 7 destination 10
source 8 destination 10
source 9 destination 10
source 10 destination 10
 pohoch gya
