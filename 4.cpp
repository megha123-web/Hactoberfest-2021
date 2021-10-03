#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}
int main() {
  int n;
  cin>>n;

  int myarr[n];
  int num;
  int output;

  cout << "Please enter n elements ASCENDING order" << endl;
  for (int i = 0; i < n; i++) {
    cin >> myarr[i];
  }
  cout << "Please enter elements to search" << endl;
  cin >> num;

  output = binarySearch(myarr, 0, n-1, num);

  if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << output << endl;
  }

  return 0;
}
