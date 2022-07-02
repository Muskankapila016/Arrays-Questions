 /*Write a program to find a saddle point in a two-dimensional array. A saddle point in a 
numerical array is a number that is larger than or equal to every number in its column, 
and smaller than or equal to every number in its row.*/


#include <stdio.h>

int main()
{
    int a[100][100],i,j,n,c,min,max,k,f=0;
    printf("enter the number of rows and columns");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter the element a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    for(i=0;i<n;i++)
    {
        min=a[i][0];
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
                c=j;
            }
            max=0;
            for(k=0;k<n;k++)
            {
                if(a[k][c]>max)
                {
                    max=a[k][c];
                }
            }
        
        }
      
       
    }
        if(max==min)
            {
                printf("\nthe saddle point is %d",max);
               
                f=1;
                
                
            }
            
      if(f==0)
        {
              printf("\nthe saddle point is absent ");
        }
     
        
    
    
}


