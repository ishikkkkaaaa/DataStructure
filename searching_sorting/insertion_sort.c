#include<stdio.h>
 
int main() {
   int i, j, temp, *arr, n;
 
 	printf("Enter the value of n\n");
    scanf("%d", &n);
    
    arr = (int*)malloc(n*sizeof(int));
    
    printf("Enter element:\n");
    for(i=0;i<=n-1;i++)
      {
       scanf("%d",&arr[i]);
    }
    
   for (i = 1; i < n; i++){
      temp = arr[i];
      j = i - 1;
      while ((temp < arr[j]) && (j >= 0)) {
         arr[j + 1] = arr[j];
         j = j - 1;
      }
      arr[j + 1] = temp;
   }
 
   printf("After Sorting: ");
   for (i = 0; i < n; i++) {
      printf("\n%d", arr[i]);
   }
 
   return 0;
}
