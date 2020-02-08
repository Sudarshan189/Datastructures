#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> arr, int n) {
    bool isSorted=false;
    int lastPosition=n-1;;
    while(!isSorted) {
        isSorted=true;
        for(int i=0;i<lastPosition;i++) {
            if(arr[i] > arr[i+1]) {
                arr[i]=arr[i]+arr[i+1];
                arr[i+1]=arr[i]-arr[i+1];
                arr[i]=arr[i]-arr[i+1];
                isSorted=false;
            }
        }
        lastPosition--;
    } 
    return arr;
}

int main() {
 vector<int> arr={5,4,7,3,2};
  arr =bubbleSort(arr, arr.size());
  for(int a: arr) {
        cout << a << " ";
    }
   return 0;
}
