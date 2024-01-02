
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct medi
{
  int id;
  char medi_name[100];
  int rack;
  int  cabinate;      //dsddddddddddssssss
  int quanity;             
  int sale;
  int total;
  int unit;
  int cost;
  int profit;
  int bye;
  int qty;
  char pur_date[20];
  char exp_date[20];
  char manu_date[20];
  char bill[100];
  char comp_name[100];
  char supp_name[100];

};
struct medi m;
  
 FILE *fptr1;  
void medicine()
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
       
         fptr1=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\medical_info.txt","r+");
         int lll=0;
          while(fscanf(fptr1,"%d%s%d%d%d%d%d%d%d%d%d%d%s%s%s%s%s%s",&m.id,&m.medi_name,&m.rack,&m.cabinate,&m.quanity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.bye,&m.qty,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill,&m.comp_name,&m.supp_name)!=EOF)
            {
                lll++;
            }
    
       
         fptr1=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\medical_info.txt","a+");
       
      //  printf("\nEnter the Medicine id:");
      //  scanf("%d",&m.id);
        fprintf(fptr1,"\t%d",++lll);
         
         printf("\nEnter the Medicine name:");
        scanf("%s",m.medi_name);
        fprintf(fptr1,"\t%s",m.medi_name);

         printf("\nEnter the rack no:");
        scanf("%d",&m.rack);
        fprintf(fptr1,"\t%d",m.rack);
         
         printf("\nEnter the cabinate:");
        scanf("%d",&m.cabinate);
        fprintf(fptr1,"\t%d",m.cabinate);
         
         printf("\nEnter the quantity:");
         scanf("%d",&m.quanity);
         fprintf(fptr1,"\t%d",m.quanity);
         
         printf("\nEnter the sale:");
        scanf("%d",&m.sale);
        fprintf(fptr1,"\t%d",m.sale);
         
         printf("\nEnter the Total:");
        scanf("%d",&m.total);
        fprintf(fptr1,"\t%d",m.total);
         
         printf("\nEnter the unit:");
        scanf("%d",&m.unit);
        fprintf(fptr1,"\t%d",m.unit);
         
         printf("\nEnter the cost:");
        scanf("%d",&m.cost);
        fprintf(fptr1,"\t%d",m.cost);
         
         printf("\nEnter the profit:");
        scanf("%d",&m.profit);
        fprintf(fptr1,"\t%d",m.profit);
         
         printf("\nEnter the bye:");
        scanf("%d",&m.bye);
        fprintf(fptr1,"\t%d",m.bye);
         
         printf("\nEnter the qyt:");
        scanf("%d",&m.qty);
        fprintf(fptr1,"\t%d",m.qty);
         

         printf("\nEnter the pur_date:");
        scanf("%s",&m.pur_date);
        fprintf(fptr1,"\t%s",m.pur_date);
         
         printf("\nEnter the exp_date:");
        scanf("%s",&m.exp_date);
        fprintf(fptr1,"\t%s",m.exp_date);

         printf("\nEnter the manu_date:");
        scanf("%s",&m.manu_date);
        fprintf(fptr1,"\t%s",m.manu_date);

         printf("\nEnter the bill:");
        scanf("%s",&m.bill);
        fprintf(fptr1,"\t%s",m.bill);

         printf("\nEnter the company name:");
        scanf("%s",m.comp_name);
        fprintf(fptr1,"\t%s",m.comp_name);

         printf("\nEnter the supplier name:");
        scanf("%s",m.supp_name);
        fprintf(fptr1,"\t%s\n",m.supp_name);
          fclose(fptr1);
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

        
