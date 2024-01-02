

#include<stdio.h>
#include<string.h>
    FILE *fptr1;
void medi_entry()
{     int cccc=0;
 

fptr1=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\medical_info.txt","r+");

while(fscanf(fptr1,"%s%s%d%d%d%d%d%d%d%d%d%d%s%s%s%s%s%s",&m.id,&m.medi_name,&m.rack,&m.cabinate,&m.quanity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.bye,&m.qty,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill,&m.comp_name,&m.supp_name)!=EOF)
{    
   cccc++;
   
}

fclose(fptr1);
   printf("\nThere are %d Medicines",cccc);
}

      