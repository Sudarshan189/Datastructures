#include <iostream>
#include <vector>

using namespace std;

vector<int> insertionSort(vector<int> arr, int n) {
    
    for(int i=0;i<n;i++) {
        int temp = arr[i];
        int pos = i;
        
        while(pos > 0 && temp < arr[pos - 1]) {
            arr[pos] = arr[pos-1];
            pos=pos-1;
        }
        arr[pos]=temp;
    }
    return arr;
}

int main()
{
    vector<int> arr = {2,6,4,1,90,6,3,-1};
   arr = insertionSort(arr,arr.size());
   for(int a:arr){
       cout << a  << " ";
   }   
   return 0;
}
