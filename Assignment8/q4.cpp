#include <iostream>
using namespace std;


template<class T>
T sort(T arr[], int n){
     
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main(){

    int arr[]={4,3,5,16,8,10};
    cout<<"sorted:"<<sort(arr, 6)<<"\n";

    float b[] = {2.5, 1.2, 3.8};
    cout << "Min (float): " <<sort(b, 3) << "\n";

    return 0;

}

   
 


