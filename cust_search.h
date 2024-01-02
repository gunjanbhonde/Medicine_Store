#include<stdio.h>
#include<stdlib.h>
#include<string.h>


       FILE *fptr;


void cust_search()
{       int  i;
     int flag=0;
       
       fptr=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt","r+");

        
        printf("\nEnter the customer id you want to search :");
        scanf("%d",&i);
       
       
          while(fscanf(fptr,"%d%s%s%s%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
         {
              if(c.cust_id==i)
              {   
                    flag=1;
                    break;
              }
              
         }
        fclose(fptr);

           

       
       if(flag)
       {
           printf("\nid found\n");
            printf("Customer id:%d\n",c.cust_id);
        printf("Customer name  :%s\n",c.cust_name);
          printf("Customer city:%s\n",c.cust_city);
        printf("Customer mob.no:%s\n",c.mob_no);
         printf("Customer email:%s\n",c.email);
    printf("\n--------------------------------------------------\n");
       }
      
       else
       {
         printf("\nid not found\n");
       }
      

}

        

