#include <stdio.h>

void insertion(int a[], int n){

  int i,j,key;
  for (i=1 ; i<n ; i++ ) {

     key=a[i];
     j=i-1;

     while (j>=0 && a[j]>key) {
       a[j+1]=a[j];
       j=j-1;
     }

     a[j+1]=key;
  }
}

int main() {

  int a[5],n,i;
  printf("Enter size of array\n");
  scanf("%d",&n);
  printf("Enter Elememts:");
  for(i=0 ; i<n ; i++)
    scanf("%d", &a[i] );
  insertion(a,n);
  printf("Resultant Array:\n");
  for(i=0 ; i<n ; i++)
   printf("%d ",a[i] );
   return 0;
}
