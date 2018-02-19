#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define MAX 100000
using namespace std;
void printPairs(int arr[], int arr_size, int sum)
{
  int i, k;
  bool q[MAX] = {0}; 
 
  for (i = 0; i < arr_size; i++)
  {
      k = sum - arr[i];
      if (k >= 0 && q[k] == 1)
         printf("Amount %d is (%d, %d) \n", 
                 sum, arr[i], k);
      q[arr[i]] = 1;
  }
    system("pause");
}
int main()
{
    int A[] = {5, 2, 4, 3, 7, 10};
    int n;
    cout << "Enter the X : ";
    cin >> n;
    int arr_size = sizeof(A)/sizeof(A[0]);
    printPairs(A, arr_size, n);
    getchar();
    return 0;
    system("pause");
}
