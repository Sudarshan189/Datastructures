int findMin(vector<int> arr, int n, int initialPos) {
    int minPos=initialPos;
    for(int i=initialPos;i<n;i++) {
        if(arr[i] < arr[minPos]) {
            minPos = i;
        }
    }
    return minPos;
}

 // Select the min
// move to next min position 
vector<int> selectionSort(vector<int> arr, int n) {
    int minPos=0;
    int temp;
    for(int i=0;i<n;i++) {
        minPos = findMin(arr,n,i); 
        temp = arr[i];
        arr[i]=arr[minPos];
        arr[minPos]=temp;
    }
    return arr;
}


int main() {
 vector<int> arr={2,4,7,3,5};
    
  arr =selectionSort(arr, arr.size());
  for(int a: arr) {
        cout << a << " ";
    }
   return 0;
}
