#include <stdio.h>
#include <stdlib.h>
int n ;
void create(int a[])
{
    printf("enter the  %d elements of an array ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
}
void display(int a[])
{
    printf("  %d elements of an array ",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
}
void search(int a[])
{
    int search,i,count=0;
    
    printf("enter the element 2 be searched");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            count=1;
            
            break;
        }
    }
    if(count==0)
    {
        printf("element not found");
    }
    else
    {
        printf("the element is at location %d",i+1);
    }
}
void insert(int a[])
{
    int i ,pos, insert,choice,temp;
  printf("write the element 2 be inserted");
  scanf("%d",&insert);
  printf("write the position where it has to be inserted");
   scanf("%d",&pos);
   for(i=n-1;i>=pos-1;i--)
   {
       
     a[i+1]=a[i];
     
       
   }
   n++;
   a[pos-1]=insert;
   
  
}
void delete(int a[])
{
 int pos;
 printf("enter the position from where u want to delete the element");
      scanf("%d",&pos);
      int temp=a[pos-1];
      for(int i=pos-1;i<n-1;i++)
      {
          a[i]=a[i+1];
      }
      n--;
      printf(" the element deleted is%d",temp);
}
int main()
{
    int a[100],choice;
    printf("size of array is ...");
    scanf("%d",&n);
    do{
      
  
   printf("\n1. create \n2. display\n3. insert\n4. delete\n5. search\n6. exit");

   
   printf("\n\nenter your choice(1-6)");
   scanf("%d",&choice);
         
             switch(choice)
             {
                 case 1:create(a);
                 break;
                 case 2:display(a);
                  break;
                 case 3:insert(a);
                    break;
                 case 4: delete(a);
                    break;
                    case 5: search(a);
                    break;
                    case 6:exit(0); 
                    break;
                    
                 default: 
                printf("wrong choice try again");
                    break;
                
             }
      }while(choice!=6);
         

    return 0;
}


