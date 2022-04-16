#include<iostream>
using namespace std;
void quickSort(int a[], int, int);

// test

int main()
{
	int array[]={43,64,24,13,4,67,97,35,86,34,98,2,37};
	int k;
	int len = (sizeof(array))/sizeof(int);
	cout<<"the original arrayare: "<<endl;
	for(int i=0;i<len-1;i++)
		cout<<array[i]<<"->";
	cout<<array[len-1]<<endl;
	quickSort(array, 0, len-1);
	cout<<"the sorted arayare: "<<endl;
	for(int i=0;i<len-1;i++)
		cout<<array[i]<<"->";
	cout<<array[len-1]<<endl;
	return 0;
}

void quickSort(int a[], int l, int r)
{
	if(l<r)
	{
		int i=l, j=r, X=a[i];
		while(j>i)
		{
			while(i<j && a[j]>=X)
				j--;
			if(i<j)
				a[i++]=a[j];
			while(i<j && a[i]<=X)
				i++;
			if(i<j)
				a[j--]=a[i];
		}
		a[i]=X;
		quickSort(a,l,i-1);
		quickSort(a,i+1,r);
	}
}
