#include <iostream>
using namespace std ;


void Swap_Values(int current, int min, int* array){
    int temp = array[current] ;
    array[current] = array[min] ;
    array[min] = temp ;
}

int* Selection_Algorithm(int* array , int size_of_array){
    int min_index ;
    for(int i = 0; i < size_of_array; i++){
        min_index = i ;
        for(int j = (i + 1) ; j < (size_of_array) ; j++){
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

    for(int i = 0 ; i < size ; i++){
        cout << sorted_array[i] << " " ;
    }

    cout << endl ;
}