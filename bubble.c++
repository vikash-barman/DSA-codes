#include<iostream>
using namespace std;
void bubble(int arr[], int n){
    int hold, pass;
    int switched = true;
    for(int pass = 0; pass<n-1 && switched == true; pass++){
        switched = false;
        for(int j=0; j<n-pass-1; j++){
            if(arr[j]>arr[j+1]){
              switched = true;
              hold = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = hold;
            }
        }
    }

}
int main(){
    int arr[] = {25,48,57,37,12,92,86,33};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,size);
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}