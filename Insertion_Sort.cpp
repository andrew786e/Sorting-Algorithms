#include <iostream>
using namespace std ;

int* Insertion_Algorithm(int* array, int size_of_array){
    int temp ;
    int placement_index;
    int count = 0 ;
    bool move = false ; 
    for(int i = 0 ; i < size_of_array; i++){
        int temp2 ;
        int temp1 ;
        temp = array[i] ;
        for(int j = 0 ; j <= i ; j++){
            if(move){
                temp2 = array[j] ;
                array[j] = temp1 ;
                temp1 = temp2 ;
            }

            if(array[j] > temp and count == 0){
                count = 1 ;
                placement_index = j ;
                move = true ;
                temp1 = array[j] ;
                array[j] = temp;
                cout << array[j] << endl ;
            }

        }

        count = 0 ;
        move = false ;
    }
    return array ;
}

int main(){
    int array[8] = {1,8,3,7,5,2,2,6} ;
    int* output_array = Insertion_Algorithm(array,8) ;

    for(int i = 0; i < 8; i++){
        cout << output_array[i] << " " ;
    }
    cout << endl ;
}