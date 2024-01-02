
#include<stdio.h>
#include<string.h>


void cust_list()
{
FILE*fptr;

 fptr=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt","r+");

while(fscanf(fptr,"%d%s%s%s%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
{
      printf("Customer id:%d\n",c.cust_id);
  printf("Customer name  :%s\n",c.cust_name);
    printf("Customer city:%s\n",c.cust_city);
  printf("Customer mob.no:%s\n",c.mob_no);
   printf("Customer email:%s\n",c.email);
    printf("\n--------------------------------------------------\n");
}

fclose(fptr);

}