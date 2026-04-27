#include<iostream>
using namespace std;


template<class T>
T findmax(T arr[], int n){

    T max=arr[0];

    for(int i=0; i<n;i++){
        if (arr[i]>max){
        max=arr[i];
        }

    }
    return max;
}

int main(){

    int arr[]={2,5,6,1,8};
    cout<<"max element:"<<findmax(arr,5)<<"\n";

    float b[] = {2.5, 1.2, 3.8};
    cout << "Min (float): " << findmax(b, 3) << "\n";

    return 0;

}