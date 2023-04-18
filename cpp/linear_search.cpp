#include <iostream>

using namespace std;



int linearSearch(int key, int arr[]){
    for(int i = 0 ; i < (sizeof(arr) - 1) ; i++){
        if(arr[i] == key){
            return i + 1;
        }
    }
    return -1;

}

int main(){
    int arr[10] = {1,23,45,66};

    cout << "Posiiton of 45 : " << linearSearch(45,arr) << endl ;
    cout << "Position of 90 : " << linearSearch(90,arr) << endl;

return 0;
}


/*
    DRAWBACKS OF LINEAR SEARCH
    - It's very time consuming as it works sequentially
    - It can be applied to only a small amount of data
    - It's a very slow process as almost all the elements have to be accessed
*/
