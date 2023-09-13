#include<iostream>
using namespace std;
void printArray(int arr[][4], int row , int col){//row wise access
    for(int i =0 ; i<row ; i++){
        for (int j= 0 ;j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// void printArray(int arr[][4], int row , int col){//column wise access
//     for(int i =0 ; i<col ; i++){
//         for (int j= 0 ;j < row; j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }

bool findTarget(int arr[][4], int row, int col, int target){
    for(int i =0 ; i<row ; i++){
        for (int j= 0 ;j < col; j++){
            if(arr[i][j]==target)
            return true;
        }
        
    }
    return false;
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

    // for(int i =0; i<row ; i++){
    //     for(int j =0; j<col ; j++){
    //         cout << "row index :"<<i<<" column index :"<<j<<endl;
    //         cin>>arr[i][j];
    //     }
    // }
    // printArray(arr,row,col);

    // int brr[][4]= {//no of columns dena mandatory hia
    //     {1,2,3,4},
    //     {4,5,6,7},
    //     {8,9,10,11}
    // };
    // int target;
    // cin>>target;
    // int result = findTarget(arr,row, col,target);

    // if(result){
    //     cout <<"yees element is present :";
    // }

    // else{
    //     cout<<"wtf enter no. preset in array :";
    // }


    return 0;
}