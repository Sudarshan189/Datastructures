#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> arr, int n) {
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
    for(int a: arr) {
        cout << a << " ";
    }
}

int main() {
 vector<int> arr={5,4,7,3,2};
  bubbleSort(arr, arr.size());
   return 0;
}
