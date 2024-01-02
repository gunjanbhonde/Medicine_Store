#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *fptr;


void search_cname()
{      
    
   char i[100];
     int flag=0;
       
       fptr=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt","r+");

        
        printf("\nEnter the customer name you want to search :");
        scanf("%s",&i);
       
       
          while(fscanf(fptr,"%d%s%s%s%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
         {
              if(strcmp(c.cust_name,i)==0)
              {   
                    flag=1;
                    break;
              }
              
         }
        fclose(fptr);

           

       
       if(flag)
       {
         printf("\nCustomer found\n");
              printf("Customer id:%d\n",c.cust_id);
          printf("Customer name  :%s\n",c.cust_name);
            printf("Customer city:%s\n",c.cust_city);
          printf("Customer mob.no:%s\n",c.mob_no);
           printf("Customer email:%s\n",c.email);
    printf("\n--------------------------------------------------\n");

       }
      
       else{
           printf("\nCustomer not found\n");
       }
      
         

}


        

