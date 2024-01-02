

#include<stdio.h>
#include<string.h>

void search_name()
{
     char i[100];
     int flag=0;
       FILE*fptr2;
       
       
        fptr2=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\supplier.info.txt","r+");
         printf("\nEnter the Supplier name you want to search :");
        scanf("%s",&i);
       
  while(fscanf(fptr2,"%d%s%s%s%s",&s.supp_id,&s.supp_name,&s.temp1_mob_no,&s.temp1_city,&s.temp1_email)!=EOF)

         {
              if(strcmp(s.supp_name,i)==0)
              {   
                    flag=1;
                    break;
              }
              
         }
        fclose(fptr2);

           

       
       if(flag)
      {
             printf("\n----------------------------------------------\n");
              printf("\nSupplier id:%d",s.supp_id);
          printf("\nSupplier name  :%s",s.supp_name);
    printf("\nSupplier temp1.mob_no:%s",s.temp1_mob_no);
      printf("\nSupplier temp1.city:%s",s.temp1_city);
     printf("\nCustomer temp1.email:%s",s.temp1_email);
      printf("\n-----------------------------------------------------\n");
      }
       else
       {
          printf("Supplier  not found!");
       }
      

}