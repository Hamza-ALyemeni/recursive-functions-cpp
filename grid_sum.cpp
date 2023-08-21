#include<iostream>
using namespace std;

int path_sum(int arr[100][100] , int ROWS , int COLS , int row = 0 , int col = 0){
    int result = arr[row][col];
    if(row == ROWS - 1 && col == COLS - 1){
        return result;
    }
    
    if (arr[row][col + 1] > arr[row + 1][col] && arr[row][col + 1] > arr[row + 1][col + 1])
    {
       result = arr[row][col] + path_sum(arr, ROWS,COLS , row , col + 1);

    }else if (arr[row + 1][col] > arr[row][col + 1] && arr[row + 1][col] > arr[row + 1][col + 1]){

       result = arr[row][col] + path_sum(arr,ROWS ,COLS ,row + 1 , col);

    } else if(arr[row + 1][col + 1] > arr[row][col + 1] && arr[row + 1][col + 1] > arr[row + 1][col]){

       result =  arr[row][col] + path_sum(arr,ROWS ,COLS ,row + 1 , col + 1);

    }
}

int main(){
    int grid[100][100]; 
    int n , m;
    cin>>n>>m;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>grid[i][j];
        }
    }
    cout << path_sum(grid, n, m);

    return 0;
}

