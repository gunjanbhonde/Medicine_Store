//#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct bill_slip
{
  int billno;
  char cname[100];
  char mediname[100];
   int medi_qty;
  int medi_rate;
  int Total;
  char Day[100];
  char Month[100];
  char Year[100];
   
};
struct bill_slip b;

void  bill()
{         
                 //    printf("hi");   
                     
                        
                        FILE *fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","r+");
                        int count=0;
                         while(fscanf(fptr3,"%d %s %s  %d %d %d %s %s %s",&b.billno,&b.cname,&b.mediname,&b.medi_qty,&b.medi_rate,&b.Total,&b.Day,&b.Month,&b.Year)!=EOF)
                           {
                            count++;
                           }
                                //  printf("hi");   
         //--------------------------------------------------------------------------------------------------for the bill no 
                        
                    //   printf("%d\t",count);
                        fclose(fptr3);
                         
   //---------------------------------------------------------------------------------------------------------------------------------------------------
                                                  printf("\nEnter the customer name:");
                                                scanf("%s",&b.cname);
                                                 int flag=0;
       
                                                  fptr=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt","r+");
       
                                                 while(fscanf(fptr,"%s%s%s%s%s",c.cust_id,c.cust_name,c.cust_city,c.mob_no,c.email)!=EOF)
                                                      {
                                      
                                                     if(strcmp(c.cust_name,b.cname)==0)
                                                         {   
                                                          
                                                              flag=1;
                                                                 break;
                                                         }
              
                                                      }
                                                          fclose(fptr);
                                                        if(flag)
  {
                                                     
                                         
              //----------------------------------------------------------------------------------------------------------------customer name

                                                         printf("\nThe customer is valid");

             //---------------------------------------------------------------------------------------------------------------------------------------------------
                                     
                                                         
                                                            printf("\nEnter the medicine name:");
                                                            scanf("%s",&b.mediname);
                                                            printf("\nEnter the Quantity of the Medicine:");
                                                                    scanf("%d",&b.medi_qty);
                                                             int f=0;  // for checking condition
                                                       fptr1=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\medical_info.txt","r+");
                                                             while(fscanf(fptr1,"%s%s%s%s%d%d%d%d%d%d%d%d%s%s%s%s%s%s",&m.id,&m.medi_name,&m.rack,&m.cabinate,&m.quanity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.bye,&m.qty,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill,&m.comp_name,&m.supp_name)!=EOF)

                                                                 {
                                                                    if(strcmp(m.medi_name,b.mediname)==0)
                                                                            {   
                                                                               f=1;
                                                                                if(m.quanity>=b.medi_qty)
                                                                                {
                                                                                     printf("\nEnter the Rate of the medicine:");
                                                                                     scanf("%d",&b.medi_rate);
                                                                                     int x=b.medi_qty;
                                                                                     int y=b.medi_rate;
                                                                                     int ll=m.quanity;

                                                                                     int z=(x*y) ;
                                                                                     b.Total=z;

                                                                                     

                                                                                    //  int fff;
                                                                                    //  FILE *fptr1=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\medical_info.txt","r");
                                                                                    //   FILE *fptr7=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\temp2_Medi.txt","a+");
                                                                                                    
	    	                                                                            //               int mm=(ll-x);
                                                                                    //               printf("%d",mm);

		               

                                                                                }
                                                                                else
                                                                                {
                                                                                  printf("\nMedicine are out of stocks");
                                                                                }
                                                                              break;
                                                                            }
              
                                                                 }
                                                                    
                                                                 if(f)
                {
                                                                                                       
                                                                                   printf("%d\nTotal is:",b.Total);
                                                                                   fclose(fptr1);
                                                                                   printf("Enter the Day/Month/year:");
                                                                                   scanf("%s",&b.Day);
                                                                                    printf("Enter the Day/Month/year:");
                                                                                   scanf("%s",&b.Month);
                                                                                    printf("Enter the Day/Month/year:");
                                                                                   scanf("%s",&b.Year);




                                                                                 












                                                     printf("\nhi1");


                                                      fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","a+");
                                                      fprintf(fptr3,"%d\t",++count);
                                                      fclose(fptr3);
                                                         
                                                      fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","a+");
                                                      fprintf(fptr3,"%s\t",b.cname);
                                                      fclose(fptr3);
                                                       
                                                      fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","a+");
                                                      fprintf(fptr3,"%s\t",b.mediname);
                                                      fclose(fptr3);
                                                      printf("\nhi2");
                                                       fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","a+");
                                                      fprintf(fptr3,"%d\t",b.medi_qty);
                                                      fclose(fptr3);
                                                       fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","a+");
                                                      fprintf(fptr3,"%d\t",b.medi_rate);
                                                      fclose(fptr3);

                                                      fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","a+");
                                                      fprintf(fptr3,"%d\t",b.Total);
                                                      fclose(fptr3);

                                                        fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","a+");
                                                      fprintf(fptr3,"%s\t",b.Day);
                                                      fclose(fptr3); 
                                                        fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","a+");
                                                      fprintf(fptr3,"%s\t",b.Month);
                                                      fclose(fptr3); 
                                                       fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","a+");
                                                      fprintf(fptr3,"%s\n",b.Year);
                                                      fclose(fptr3); 
                                              printf("\nhi3");





















                 }

  
            else
            {
                printf("\nThe Medicine are not Available");
            }                      

     }


      else
    {
       printf("\nThe customer is not valid");

                                                
    }

}




       
                                                         







                        


                                                
