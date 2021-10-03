#include <bits/stdc++.h>

using namespace std;

void rotate_array(int arr[], int n, int k)
{
	int temp = k;
	for (int i = 0; i < k % n; i++)
	{

		arr[k] = arr[i];
		temp = (k + 1) % n;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()

{
	int arr[] = {10, 20, 30, 40, 50};
	rotate_array(arr, 5, 3);
}