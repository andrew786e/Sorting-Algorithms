#include <iostream>
using namespace std ;

//This function swaps the value of two indexes in the array 
//Arguments: Current: Minimum position to be filled in the sorted list
// Min: The position of the minimum value in the unsorted list
void Swap_Values(int current, int min, int* array){
    int temp = array[current] ;
    array[current] = array[min] ;
    array[min] = temp ;
}


//This function arranges an array in increasing order
//Arguements: Array: The values that are contained in the array 
// Size_of_array: Number of elements in the array
int* Selection_Algorithm(int* array , int size_of_array){
    int min_index ;
    for(int i = 0; i < size_of_array - 1; i++){
        min_index = i ;
        for(int j = (i + 1) ; j < (size_of_array) ; j++){
            //Checks if the min value is in the minimum index.
            //If not the min index is replaced
            if(array[j] < array[min_index]){
                min_index = j ;
            }
        }
        Swap_Values(i,min_index,array) ;

    }
    return array ;
}

int main(){
    int array[10] = {1,4,2,3,8,0,2,1,9,10} ;
    int size = 10 ;
    int* sorted_array = Selection_Algorithm(array,size) ;

    //Outputs the sorted array.
    for(int i = 0 ; i < size ; i++){
        cout << sorted_array[i] << " " ;
    }

    cout << endl ;
}