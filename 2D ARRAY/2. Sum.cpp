#include<iostream>
using namespace std;

//row wise sum
void printRowSum(int arr[][3], int row, int col)
{
	for(int col=0; col<3; col++){
		int sum = 0;
		for(int row=0; row<3; row++){
			sum += arr[row][col];
		}
		cout<<sum;
		cout<<endl;
	}
}

//col wise sum
void printColSum(int arr[][3], int row, int col)
{
	for(int row=0; row<3; row++){
		int sum = 0;
		for(int col=0; col<3; col++){
			sum += arr[row][col];
		}
		cout<<sum;
		cout<<endl;
	}
}

//Largest Sum
int largestRowSum(int arr[][3], int row, int col) {

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
       
    }

    cout << "the maximum sum = " << maxi << endl;
    return rowIndex;
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
	
	cout<<"Maximum sum  Index= "<<largestRowSum(arr, 3, 3);
	
	return 0;
}
