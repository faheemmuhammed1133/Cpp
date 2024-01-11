// calculate elements in eacch row of matrix

#include <iostream>
using namespace std;
int main()
{
    int rows , column;
    cout<<"Enter the number of rows and columns of matrix";
    cin>>rows>>column;
    float arr[rows][column];
    for(int i = 0 ; i < rows ; i++)
    {
    for(int j = 0 ; j < column ; j++){
        cout<<"Enter element of row "<<i+1<<" and column"<<j+1<<" : ";
        cin>>arr[i][j];
    }
    }
    for(int i = 0 ; i < rows ; i++){
        int sum = 0;
        for(int j = 0 ; j < column ; j++)
        {
            if(j == column -1){
            cout<<"\nSum of Row "<<i+1<<" = "<<sum+arr[i][j];
            }else
            {
            sum += arr[i][j];
            }
        }
    }
    cout<<"\n\n";
    return 0;
}