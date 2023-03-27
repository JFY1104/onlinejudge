#include<iostream>
using namespace std;

int main(){
    int col,row;
    while(cin >> row >> col){
        
        int **arr = new int *[row];
        for(int i = 0 ; i < row ; i++  ){
            arr[i] = new int[col];
        }
    //    int arr[100][100];
    
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                cin >> arr[i][j];
            }
        }
    /*    for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j< col ; j++){
                cout << arr[i][j];
            }
        }*/

        for(int i = 0 ; i < col ; i++){
            for(int j = 0 ; j < row ; j++){
                cout << arr[j][i] << " " ;
            }
            cout << "\n";
        }

      for(int i=0  ; i < row ; i++) 
            delete[] arr[i];
        delete [] arr;
    
    }
    
}