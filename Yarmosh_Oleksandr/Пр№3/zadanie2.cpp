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

Name[1]="Аурум";
substance[1]="metal";
massa[1]=196;

Name[2]="Срiбло";
substance[2]="metal";
massa[2]=107;
								     
Name[3]="Мiдь";
substance[3]="metal";
massa[3]=63;

Name[4]="Ртуть";
substance[4]="metal";
massa[4]=200;

Name[5]="Свинець";
substance[5]="metal";
massa[5]=207;

Name[6]="Залізо";
substance[6]="metal";
massa[6]=89;

Name[7]="Станум";
substance[7]="metal";
massa[7]=12;

Name[8]="Платина";
substance[8]="metal";
massa[8]=195;

Name[9]="Сірка";
substance[9]="nemetal";
massa[9]=32;

Name[10]="Вуглець";
substance[10]="nemetal";
massa[10]=12;

Name[11]="Цинк";
substance[11]="metal";
massa[11]=65;

Name[12]="Стибій";
substance[12]="polymetal";
massa[12]=121;

Name[13]="Арсен";
substance[13]="polymetal";
massa[13]=74;

Name[14]="Гелій";
substance[14]="nemetal";
massa[14]=4;

Name[15]="Неон";
substance[15]="nemetal";
massa[15]=20;

Name[16]="Фтор";
substance[16]="nemetal";
massa[16]=18;

Name[17]="Хлор";
substance[17]="nemetal";
massa[17]=35;

Name[18]="Селен";
substance[18]="nemetal";
massa[18]=78;

Name[19]="Астат";
substance[19]="nemetal";
massa[19]=209;

Name[20]="Кремній";
substance[20]="nemetal";
massa[20]=28;

Name[21]="Криптон";
substance[21]="nemetal";
massa[21]=83;

Name[22]="Скандiй";
substance[22]="metal";
massa[22]=45;

Name[23]="Цирконiй";
substance[23]="metal";
massa[23]=91;

Name[24]="Кобальт";
substance[24]="metal";
massa[24]=59;

Name[25]="Паладiй";
substance[25]="metal";
massa[25]=106;


}

string tempName;
int i=0;
int k=1;
int arr[size];

printf("ВВедите вещество : ");
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
    cout <<"\nНазва : "<< Name[j]<<"\nМаса речовини : "<< massa[j]<<"\nКлас речовини : "<<substance[j]<<endl;
   
}
}
system("pause");
return 0;
	}
