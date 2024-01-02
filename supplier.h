

#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct supp
{
  int  supp_id;
  char supp_name[100];
  char temp1_mob_no[100]; 
  char temp1_city[100];
  char temp1_email[100];  

};
struct supp s;
 FILE *fptr2;
void supplier()
{

         fptr2=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\supplier.info.txt","r+");
         int hhh=0;
          while(fscanf(fptr2,"%d%s%s%s%s",&s.supp_id,&s.supp_name,&s.temp1_mob_no,&s.temp1_city,&s.temp1_email)!=EOF)
            {
                hhh++;
            }

           

       printf("hi");

       fptr2=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\supplier.info.txt","a+");
      
        fprintf(fptr2,"\t%d",++hhh);
        
         printf("\nEnter the supplier name:");
        scanf("%s",&s.supp_name);
        fprintf(fptr2,"\t%s",s.supp_name);

         printf("\nEnter the supplier temp1.mob_no:");
        scanf("%s",&s.temp1_mob_no);
        fprintf(fptr2,"\t%s",s.temp1_mob_no);

         printf("\nEnter the supplier temp1.city:");
        scanf("%s",&s.temp1_city);
        fprintf(fptr2,"\t%s",s.temp1_city);

         printf("\nEnter the supplier temp1.email:");
        scanf("%s",&s.temp1_email);
        fprintf(fptr2,"\t%s\n",s.temp1_email);
        fclose(fptr2);
         
      
}

        

