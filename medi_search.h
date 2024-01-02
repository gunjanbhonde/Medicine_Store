
#include<stdio.h>
#include<string.h>
FILE *fptr1;
void medi_search()
{
     int  i,n;
     int flag=0;
       
       

        fptr1=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\medical_info.txt","r+");
        printf("\nEnter the Medicine id you want to search :");
        scanf("%d",&i);
       
       
        while(fscanf(fptr1,"%d%s%d%d%d%d%d%d%d%d%d%d%s%s%s%s%s%s",&m.id,&m.medi_name,&m.rack,&m.cabinate,&m.quanity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.bye,&m.qty,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill,&m.comp_name,&m.supp_name)!=EOF)

         {  //   n=m.id;
              if(m.id==i)
              {   
                    flag=1;
                    break;
              }
              
         }
        fclose(fptr1);

           

       
       if(flag)
       {   

         printf("\nMedicine id:%d",m.id);   

        printf(" \nMedicine name:%s",m.medi_name);

        printf("\nrack no:%d",m.rack);
         
       
        printf("\ncabinate:%d",m.cabinate);
         
        
         printf("\nquantity:%d",m.quanity);
         
         
        printf("\nTotal:%d",m.total);
         
         
        printf("\nunit:%d",m.unit);
         
        
        printf("\nCost:%d",m.cost);
         
         
       
        printf("\nExpiry Date:%s",m.exp_date);

       
        printf("\nManufacturing Date:%s",m.manu_date);


       
        printf("\nCompany name:%s",m.comp_name);

       
       
    printf("\n--------------------------------------------------\n");
       }
      
       else
       {
           printf("Medicine not found!");
       }
      
}