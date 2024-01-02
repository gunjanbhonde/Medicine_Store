
#include<stdio.h>
#include<string.h>

void cust_entry()
{     int count=0;
    FILE*fptr;

 fptr=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt","r+");

while(fscanf(fptr,"%d%s%s%s%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
{
   count++;
}

fclose(fptr);
   printf("\nThere are %d Customers\n",count);
}