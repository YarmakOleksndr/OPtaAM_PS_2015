#include <iostream>
#include <stdlib.h>
using namespace std;

int Binary_Search (int arr[], int left, int right, int key)
{
	int a = 0,bb=0;
	while (1)
	{
          bb++;
		a = (left + right) / 2;
		
		if (key < arr[a])     
			right = a - 1;      
		else if (key > arr[a]) 
			left = a + 1;	   
		else     {    
            cout <<"Number of requests : "<< bb << "\n";              
			return a;  
            }
           

		if (left > right)        
			return 0;	
	}
}

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
	const int SIZE = 100;
	int array[SIZE] = {};
	int key = 0;
	int index = 0;
	int bb=0;

	for (int i = 0; i < SIZE; i++) 
	{
		array[i] =rand()%SIZE;
	}
	
    ShellSort(SIZE, array);
		for (int i = 0; i < SIZE; i++) 
	{
		cout << array[i] << " | ";
	}
	
	cout << "\n\nEnter any number: ";
	cin >> key;
	
    
	index = Binary_Search (array, 0, SIZE, key);
	if (index >= 0) 
		cout << "The specified number is in the cell with the index: " << index << "\n\n" ;
	else
		cout << "In an array there is no such number!\n\n";
		
	system("pause");
}
