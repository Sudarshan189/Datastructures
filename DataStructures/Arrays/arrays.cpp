#include <iostream>

class arrays
{
public:
	arrays() {}

	void travers(int *arr, int &N) {
		for (int i = 0; i < N; ++i)
		{
			std::cout << arr[i] << "\t";
		}
		std::cout << "\n";
	}

	void insert(int *arr,int* N,int pos, int item) {
		int i=*N-1;
		while(i>=pos)
		{
			arr[i+1] = arr[i];
			i--;
		}
		arr[pos]=item;
		*N=*N+1;
	}

	void delate(int *arr, int* N,int pos) {
		int i =pos;
		while(i<*N) {
			arr[i] = arr[i+1];
			i++;
		}
		*N=*N-1;
	}

	void searching(int *arr,int* N,int item) {
		int i=0;
		while(i<*N) {
			if (arr[i] == item)
			{
				std::cout << "Found at "<<i <<"\n";
				return; 
			}
			i++;
		}
		std::cout << "Item not Found\n";
	}
	void sorting(int *arr, int* N) {
		for (int i = 0; i < *N; i++)
		{
			for (int j = 0; j < *N-i-1; j++)
			{
				if (arr[j] < arr[j+1])
				{
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
	

};



int main() {
	int *arr;
	int N=6;
	arr = new int[20];
	for (int i = 0; i < N; i++)
	{
		arr[i] = i+1;
	}
	arrays a;
	a.travers(arr,N);
	// a.insert(arr,&N,1,3);
	// a.insert(arr,&N,1,3);
	// a.travers(arr,&N);
	// a.delate(arr,&N,2);
	
	// a.travers(arr,&N);
	// a.searching(arr,&N,4);
	// a.sorting(arr,&N);
	// a.travers(arr,&N);
	

}