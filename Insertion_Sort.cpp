#include <iostream>
using namespace std ;

// This function sorts out an array in increaing order 
//Arguments: Array: The array of values 
//Size_of_array : Number of elements in the array.
int* Insertion_Algorithm(int* array, int size_of_array){
    int temp ;
    int placement_index;
    int count = 0 ;
    bool move = false ; 
    //Selects elements from unordered list
    for(int i = 0 ; i < size_of_array; i++){
        int temp2 ;
        int temp1 ;
        temp = array[i] ;
        for(int j = 0 ; j <= i ; j++){
            // Moves elements on the list from left to right 
            if(move){
                temp2 = array[j] ;
                array[j] = temp1 ;
                temp1 = temp2 ;
            }

            //Checks for where the element is meant to be inserted
            if(array[j] > temp and count == 0){
                count = 1 ;
                placement_index = j ;
                move = true ;
                temp1 = array[j] ;
                array[j] = temp;
            }

        }

        count = 0 ;
        move = false ;
    }
    return array ;
}

int* Insertion_Algorithm_2(int* array, int size_of_array){

    int* sorted_array = new int[size_of_array] ;

    sorted_array[0] = array[0] ;

    bool check = false ;

    for(int i = 0; i < size_of_array ; i++){
        int count = 0 ;
        int value = array[i] ; 
        int temp2 ;
        int temp ;
        for(int j = 0; j <= i ; j++){
            if(check){
                temp2 = array[j] ;
                array[j] = temp ;
                temp = temp2 ;
            }

            if((array[j] > value) && count == 0){
                temp = array[j] ;
                array[j] = value ; 
                check = true ;
                count = 1 ;
            }
            
        }

        check = false ;
    }
    return array ;
}


int main(){
    int array[8] = {1,8,3,7,5,2,2,6} ;
    int* output_array = Insertion_Algorithm_2(array,8) ;

    for(int i = 0; i < 8; i++){
        cout << output_array[i] << " " ;
    }
    cout << endl ;
}