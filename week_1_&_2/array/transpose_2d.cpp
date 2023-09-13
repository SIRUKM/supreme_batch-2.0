#include<iostream>
using namespace std;

void transpose_2d(int arr[][3],int row, int col){//for square matrix
    for (int i=0 ;i<row;++i){
        for (int j=i;j<col;++j){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main()
{
    int arr[3][3]= {
        {1,2,3},
        {4,5,6},
        {8,9,10}
    };
    int row = 3;
    int col = 3;
    transpose_2d(arr ,row ,col);
    for (int i=0 ;i<row;++i){
        for (int j=0;j<col;++j){
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}