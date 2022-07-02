/*Design the logic to remove the duplicate elements from an Array and after the
deletion the array should contain the unique elements*/
#include <stdio.h>
int n;
void delete(int a[],int pos)
{ 
    
        int temp =a[pos];
    for(int i= pos;i<=n-2;i++)
    {
      a[i]=a[i+1];
    }
     n--;
 }
int main()
{
    int a[30],i,j;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                delete(a,j);
                j--;
                
            }
        }
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
}


