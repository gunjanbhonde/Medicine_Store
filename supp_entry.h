
#include<stdio.h>
#include<string.h>

void supp_entry()
{     int count=0;
     FILE*fptr2;

       fptr2=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\supplier.info.txt","r+");

while(fscanf(fptr2,"%d%s%s%s%s",&s.supp_id,&s.supp_name,&s.temp1_mob_no,&s.temp1_city,&s.temp1_email)!=EOF)
{
   count++;
}

fclose(fptr2);
printf("\n----------------------------------------------\n");
   printf("\nThere are %d Suppliers",count);
}

      
