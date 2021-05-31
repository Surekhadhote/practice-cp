/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <iostream>
using namespace std;
int main(int argc, char *a[])
{
int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int res = 0;
	for(int i=0;i<n;i++){
		res = res ^ ar[i];
        cout<<res;
	}
	cout<<res;    
}
