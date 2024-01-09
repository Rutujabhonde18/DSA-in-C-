#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n)
{
	//base case
	if(n <= 1)
		return ;
		
	int minIndex = 0;
	for(int i=1; i<n; i++){
		if(arr[i] < arr[minIndex]){
			minIndex = i;
		}
	}
	
	//swap 
	swap(arr[0], arr[minIndex]);
		
	//Recursive call
	selectionSort(arr+1, n-1);
}

int main()
{
	int arr[5] = {33,22,86,01,23};
	
	selectionSort(arr, 5);
	
	//print
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
