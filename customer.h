#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *fptr;
struct cust
{
  int cust_id;
  char cust_name[100];
  char cust_city[100]; 
  char mob_no[14];
  char email[100];  

};
struct cust c;
void customer()
{
    int flag=0; 
  int flagg=0;
   char user[100];
      char lock[100];
      char u[]={"gb"};
      char l[]={"123"};
        printf("\n======================Secure=======================\n");
        printf("Enter the User name:");
        fflush(stdin);
        gets(user);
        if(strcmp(u,user)==0)
         {     flag=1;
             printf("Enter the Lock key : ");
             fflush(stdin);
             gets(lock);
              if(strcmp(l,lock)==0)
              {
                   flagg=1;
                   
              }
             
         }
         if (flag==1&&flagg==1)
 //---------------------------------------------------------------------------------------------above  access lock--------------        
        {
       printf("\n=====================Secure Open=====================\n");
      
    

          fptr=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt","r+");
         int ggg=0;
          while(fscanf(fptr,"%d%s%s%s%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
            {
                ggg++;
            }

         fptr=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt","a+");
       
       
        
          // printf("\nEnter the customer id:");
          // scanf("%d",&c.cust_id);
          fprintf(fptr,"\t%d",++ggg); 
       
         printf("Enter the customer name:");
         fflush(stdin);
         gets(c.cust_name);
         //scanf("%s",&c.cust_name);
         fprintf(fptr,"\t%s",c.cust_name);     

         printf("Enter the customer city:");
         fflush(stdin);
         gets(c.cust_city);
      //scanf("%s",&c.cust_city);
         fprintf(fptr,"\t%s",c.cust_city);
       
       
         printf("Enter the customer mobile no:");
         scanf("%s",&c.mob_no);
         fprintf(fptr,"\t%s",c.mob_no);

         printf("Enter the customer email:");
         scanf("%s",&c.email);
         fprintf(fptr,"\t%s\n",c.email);
         fclose(fptr);

           
           
           
        }   
         else if (flag!=1) 
         {
          printf("\nIncorrect User name!");
         }
          else if (flagg!=1) 
         {
          printf("\nAccess Denied!");
         }





}

        
