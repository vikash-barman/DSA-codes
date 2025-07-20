#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&v){
    int n = v.size();
    for(int i=0; i<n; i++){
        //finding minimum element index
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[min_index]){
                min_index = j;
            }
        }
        // placing min index element at the beginning
        if(i != min_index){
            swap(v[i],v[min_index]);
        }
    }
    return;
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    vector<int>v(size);
    
    for(int i=0; i<size; i++){
        cin>>v[i];
    }
    selectionSort(v);  
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}