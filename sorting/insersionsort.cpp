#include <iostream>
#include <vector>

using namespace std;



vector<int> insertionSort(int n, vector<int> arr) {
   int sortedPos=0;
   int temp1;
   int tempPos;
   for(int i=1;i<n;i++) {
       tempPos=i;
       while(tempPos != 0) {
        if(arr[tempPos] < arr[tempPos-1]) {
            temp1 = arr[tempPos];
            arr[tempPos] = arr[tempPos-1];
            arr[tempPos-1] = temp1;
            tempPos--;
            continue;
        }
        break;
       }
   }
    return arr;
}

int main() {
 vector<int> arr={8,9,2,4,7,3,5,89,70,-7,8};
    
  arr = insertionSort(arr.size(),arr);
  cout << "\n";
  for(int a: arr) {
        cout << a << " ";
    }
   return 0;
}
