


#include<stdio.h>
#include<string.h>


void supp_list()
{
FILE*fptr2;

 fptr2=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\supplier.info.txt","r+");

while(fscanf(fptr2,"%d%s%s%s%s",&s.supp_id,&s.supp_name,&s.temp1_mob_no,&s.temp1_city,&s.temp1_email)!=EOF)

{             printf("\n----------------------------------------------\n");
              printf("\nSupplier id:%d",s.supp_id);
          printf("\nSupplier name  :%s",s.supp_name);
    printf("\nSupplier temp1.mob_no:%s",s.temp1_mob_no);
      printf("\nSupplier temp1.city:%s",s.temp1_city);
     printf("\nCustomer temp1.email:%s",s.temp1_email);
      printf("\n-----------------------------------------------------\n");
}

fclose(fptr2);

}