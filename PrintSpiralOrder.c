/*Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:

[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return

[1, 2, 3, 6, 9, 8, 7, 4, 5]    */


#include <stdio.h>
int printspiral(int m,int n,int a[m][n])
{
    int r=0,c=0,lcol=n-1,lrow=m-1,i;
    while(r<=lrow && c<=lcol)
    {
        for(i=c;i<=lcol;i++)
        {
            printf("%d\t",a[r][i]);
            r++;
        }
        for(i=r;i<=lrow;i++)
        {
            printf("%d\t",a[i][lcol]);
            lcol--;
        }
        if(r<=lrow)
        {
            for(i=lcol;i>=c;i--)
            {
                printf("%d\t",a[lrow][i]);
                lrow--;
            }
        }
          if(c<=lcol)
        {
            for(i=lrow;i>=r;i--)
            {
                printf("%d\t",a[i][c]);
                c++;
            }
        }
        
    }
}

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    printspiral(3,3,arr);
}


