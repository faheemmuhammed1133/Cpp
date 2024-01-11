// C++ program to find Majority element in an array
#include <iostream>
using namespace std;

// Function to find Majority element in an aray
void findMajority(int arr[], int n)
{
	int maxCount = 0;
	int index = -1; // sentinels
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
		}
		// update maxCount if count of current element is greater
		if (count > maxCount) {
			maxCount = count;
			index = i;
		}
	}
	// if maxCount is greater than n/2  return the corresponding element
	if (maxCount > n / 2){
        cout<<"majority element is :"<<arr[index]<<"\n";
    }else{
		cout << "No Majority Element\n\n" ;
}
cout << "Elements in the array: | ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "|\n";
}
int main()
{   int n;
    cout <<"number of elements you need ";
    cin>>n;

    if( n<= 0)
    {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }
	int arr[n];
	 for(int i=0;i<n;i++){
        cout<<"\nenter element "<<i+1 << "\n";
        cin>>arr[i];
        }

	// Function calling 
	findMajority(arr, n);
	return 0;
}