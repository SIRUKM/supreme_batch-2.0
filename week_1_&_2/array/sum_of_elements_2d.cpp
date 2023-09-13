#include<iostream>
using namespace std;

void sum_of_row_elements(int arr[][4],int row, int col){//row wise sum
    
    for (int i=0 ;i<row;++i) {
        int sum = 0;
        for (int j=0;j<col;++j){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
    
}
void sum_of_col_elements(int arr[][4],int row, int col){//column wise sum
    
    for (int i=0 ;i<col;++i) {
        int sum = 0;
        for (int j=0;j<row;++j){
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
    
}

int sum_of_all_elements(int arr[][4],int row, int col){
    int sum = 0;
    for (int i=0 ;i<row;++i) {
        
        for (int j=0;j<col;++j){
            sum=sum+arr[i][j];
        }
        
    }
    return sum;
    
}
int main()
{
    int arr[3][4]= {
        {1,2,3,4},
        {4,5,6,7},
        {8,9,10,11}
    };
    int row = 3;
    int col = 4;
    sum_of_row_elements(arr,row, col);
    sum_of_col_elements(arr,row, col);
    int target = sum_of_all_elements(arr,row,col);
    cout<<target;
   
    return 0;
}