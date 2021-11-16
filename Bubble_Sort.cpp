#include <iostream>
using namespace std ;

//Note: In the bubble sort algorithm the number of times the second for loop runs is n - 2
//Where n is the size of the array
//In each iteration in bubble sort the maximum value in that iteration is always placed at the 
//last position checked by the conditional statement.
//The algorithmic complexity of the code is O(n^2)



//Implementation of bubble sort algorithm using while loop..
int* Bubble_Sort_While(int* array, int array_size){
    int temp ; 
    int temp_2 ;
    bool check = true ;
    int count = 0 ;
    while(check){
        check = false ;
        for(int i = 0 , j = 1; i < array_size - 1 , j < array_size ; i++ , j++ ){
            //Swapping adjacent elements .
            if(array[i] > array[j]){
                check = true ;
                temp = array[i] ;
                temp_2 = array[j] ;
                array[i] = temp_2 ;
                array[j] = temp ;
            }
        }
        array_size = array_size - 1 ;
    }

    return array ;
}


//Implementation of bubble sort algorithm using for loop
int* Bubble_Sort_For(int* array, int array_size){
    int temp ;
    int temp2 ; 
    for(int i = 1 ; i < array_size ; i++){
        for(int j = 0; j < array_size - i; j++){
            //Swapping adjacent elements
            if(array[j] > array[j + 1]){
                temp = array[j] ;
                temp2 = array[j + 1] ;
                array[j] = temp2 ;
                array[j + 1] = temp ;
            }
        }
    }
    return array ;
}

int main(){
    int array[10] = {0,2,1,5,22,1,16,32,4,3} ;
    int array_size = sizeof(array)/ sizeof(int) ;

    int* output_array = Bubble_Sort_For(array,array_size) ;
    int* output_array_while = Bubble_Sort_While(array,array_size) ;

    //For loop to print out the ordered lists
    for(int i = 0 ; i < 10 ; i++){
        cout << output_array[i] << " " ;
    }

    cout << endl ;

    for(int i = 0 ; i < 10 ; i++){
        cout << output_array_while[i] << " " ;
    }

    cout << endl ;

}