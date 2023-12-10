#include<iostream>
using namespace std;

// Linear search
bool isPresent(int arr[][3], int target, int row, int col)
{
	for(int row=0; row<3; row++){
		for(int col=0; col<3; col++)
		{
			if(arr[row][col] == target)
				return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3];
	
	//input
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}

//output
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	int target;
	cout<<"Enter target = ";
	cin>>target;
	
	if(isPresent(arr, target, 3,3))
	{
	cout<<"Present";
	}
	else
	{
		cout<<"Not prsesnt";
	}
	
	return 0;
}
