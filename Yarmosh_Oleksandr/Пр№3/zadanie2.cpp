#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
  
void ShellSort(int n, int arr[])
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = arr[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < arr[j - step])
                    arr[j] = arr[j - step];
                else
                    break;
            }
            arr[j] = tmp;
        }
}

int main()
{
	 setlocale(LC_ALL, "rus");
 int size = 100;

	string Name[size];
	string substance[size];
	float massa[size];

{ 

Name[1]="�����";
substance[1]="metal";
massa[1]=196;

Name[2]="��i���";
substance[2]="metal";
massa[2]=107;
								     
Name[3]="�i��";
substance[3]="metal";
massa[3]=63;

Name[4]="�����";
substance[4]="metal";
massa[4]=200;

Name[5]="�������";
substance[5]="metal";
massa[5]=207;

Name[6]="�����";
substance[6]="metal";
massa[6]=89;

Name[7]="������";
substance[7]="metal";
massa[7]=12;

Name[8]="�������";
substance[8]="metal";
massa[8]=195;

Name[9]="ѳ���";
substance[9]="nemetal";
massa[9]=32;

Name[10]="�������";
substance[10]="nemetal";
massa[10]=12;

Name[11]="����";
substance[11]="metal";
massa[11]=65;

Name[12]="�����";
substance[12]="polymetal";
massa[12]=121;

Name[13]="�����";
substance[13]="polymetal";
massa[13]=74;

Name[14]="����";
substance[14]="nemetal";
massa[14]=4;

Name[15]="����";
substance[15]="nemetal";
massa[15]=20;

Name[16]="����";
substance[16]="nemetal";
massa[16]=18;

Name[17]="����";
substance[17]="nemetal";
massa[17]=35;

Name[18]="�����";
substance[18]="nemetal";
massa[18]=78;

Name[19]="�����";
substance[19]="nemetal";
massa[19]=209;

Name[20]="������";
substance[20]="nemetal";
massa[20]=28;

Name[21]="�������";
substance[21]="nemetal";
massa[21]=83;

Name[22]="�����i�";
substance[22]="metal";
massa[22]=45;

Name[23]="������i�";
substance[23]="metal";
massa[23]=91;

Name[24]="�������";
substance[24]="metal";
massa[24]=59;

Name[25]="�����i�";
substance[25]="metal";
massa[25]=106;


}

string tempName;
int i=0;
int k=1;
int arr[size];

printf("������� �������� : ");
cin >> tempName;

for(int i=0;i<size;i++){
	if(tempName==substance[i]){
	arr[k]=massa[i];
	i++;
	k++;
	}
}
printf("ERROR404 \n");
                
    for (int i = 0; i < k; i++){
    	for (int j = 0 ; j < size; j++){
    if(arr[i]==massa[j])
    cout <<"\n����� : "<< Name[j]<<"\n���� �������� : "<< massa[j]<<"\n���� �������� : "<<substance[j]<<endl;
   
}
}
system("pause");
return 0;
	}
