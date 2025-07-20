#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &v){
    int size = v.size();
    for(int i=1; i<size; i++){
        int current_ele =  v[i];
        // position for current element
        int j = i-1;
        while(j>=0 && v[j]>current_ele){
            v[j+1] = v[j];
            j--;
        }
        //inset current element
        v[j+1] = current_ele;
    }

}
int main(){
    int n;
    cout<<"Enter vector size: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    insertionSort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}