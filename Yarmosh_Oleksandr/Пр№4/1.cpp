#include <iostream>
#include <stdlib.h>

using namespace std;
void ShellSort(int n, int arr[])
{
    int i, j, k;
    int tmp;
    for (k = n / 2; k > 0; k /= 2)
        for (i = k; i < n; i++)
        {
            tmp = arr[i];
            for (j = i; j >= k; j -= k)
            {
                if (tmp < arr[j - k])
                    arr[j] = arr[j - k];
                else
                    break;
            }
            arr[j] = tmp;
        }
}
int main()
{
    const int N=20;
    int arr[N];
    for(int i=0; i < N; i++)
    arr[i]=rand()%50;
    ShellSort(N, arr);
    for(int i=0; i<N; i++)
    cout << arr[i] << " ";
      int a;
    cout <<"\nEnter the number:";
    cin >> a;
    for(int i=0; i<N; i++)
    if(a==arr[i])
    cout << "Serial number = " << i;
    else
    cout << endl;
   system("pause"); 
   return 0;
    }
