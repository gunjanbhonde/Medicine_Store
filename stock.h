
#include<stdio.h>
#include<string.h>


FILE*fptr1;
void stock()
{


    fptr1=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\medical_info.txt","r+");

while(fscanf(fptr1,"%d%s%d%d%d%d%d%d%d%d%d%d%s%s%s%s%s%s",&m.id,&m.medi_name,&m.rack,&m.cabinate,&m.quanity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.bye,&m.qty,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill,&m.comp_name,&m.supp_name)!=EOF)
{    
  
  
        
        
       
        printf("\nMedicine id:%d",m.id);   //  

        printf(" \nMedicine name:%s",m.medi_name);

        printf("\nrack no:%d",m.rack);
         
       
        printf("\ncabinate:%d",m.cabinate);
         
        
         printf("\nquantity:%d",m.quanity);
         
         
        printf("\nsale is :%d",m.sale);
         
         
        printf("\nTotal:%d",m.total);
         
         
        printf("\nunit:%d",m.unit);
         
        
        printf("\nCost:%d",m.cost);
         
        
        printf("\nProfit is:%d",m.profit);
         
         
        printf("\nbye:%d",m.bye);
         
     
        printf("\nqty:%d",m.qty);
         

        printf("\npurchase Date:%s",m.pur_date);
         
       
        printf("\nExpiry Date:%s",m.exp_date);

       
        printf("\nManufacturing Date:%s",m.manu_date);

        printf("\nBill:%s",m.bill);

       
        printf("\nCompany name:%s",m.comp_name);

       
        printf("\nsupplier name:%s",m.supp_name);
         
       
    printf("\n--------------------------------------------------\n");
}

fclose(fptr1);

}