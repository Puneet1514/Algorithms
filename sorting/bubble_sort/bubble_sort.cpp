#include<iostream>
using namespace std;

void print(int arr[], int n)
{
	cout << "Sorted Array : ";
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	
	}
}

void BubbleSort(int arr[], int n)
{
	bool swapped;
	for(int i = 0; i < n - 1; i++)
	{
		swapped = false;
		for(int j = 0; j < n - i - 1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int a = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = a;
				swapped = true;
			}
		}
		if(swapped == false)
		{
			break;
		}
	}
	print(arr, n );
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	cout << "Enter array to be sorted in increasing order :"<<endl;

	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	BubbleSort(arr, n);
	return 0;
}
