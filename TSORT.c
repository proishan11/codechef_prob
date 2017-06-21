#include<stdio.h>
void merge(int a[], int p,	int q, int r){
	int n1 = q-p+1;
	int n2 = r-q;
	int l1[n1],l2[n2];
	for(int i=0; i<n1; i++)
		l1[i]=a[p+i];
	for(int i=0; i<n2; i++)
		l2[i]=a[q+i+1];
	int i=0,j=0,k=p;
	while(i<n1 && j<n2){
		if(l1[i]<=l2[j]){
			a[k] = l1[i];
			i++;
		}
		else{
			a[k] = l2[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k] = l1[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k] = l2[j];
		j++;
		k++;
	}
}
	

void mergesort(int a[],int p,int r){
	if(p<r){
		int q = p+(r-p)/2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
	
}

int main(){
	int t,i;
	scanf("%d",&t);
	int a[t];
	for(i=0; i<t; i++){
		scanf("%d",&a[i]);
	}
	int p = 0;
	mergesort(a,p,t-1);
	for(i=0; i<t; i++)
		printf("%d\n",a[i]);
	return 0;
}