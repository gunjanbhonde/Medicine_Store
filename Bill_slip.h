//  void bill();
#include<stdio.h>
#include<string.h>
#include"bill.h"
void Bill_slip()

{
      

   int g;
         
         do
         {        printf("\n------------------------------------------------------------");
              printf("\nBilling Department:");
              printf("\n1.Generate a new Bill:");
              printf("\n2.Bill Search by id :");
              printf("\n3.View total Bills:");
              printf("\nEnter your choice:");
              scanf("%d",&g);
              switch(g)
              {
                case 1:
                {
                     bill();
                     break;
                }

                case 2:
                {
                    int u;
                    printf("\nEnter the Bill no you want search: ");
                    scanf("%d",&u);
                    FILE *fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","r+");
                    int h=0;
                    while(fscanf(fptr3,"%d %s %s  %d %d %d %s %s %s",&b.billno,&b.cname,&b.mediname,&b.medi_qty,&b.medi_rate,&b.Total,&b.Day,&b.Month,&b.Year)!=EOF)
                           {
                             if(u==b.billno)
                             {
                                 h=1;
                                 break;
                             }
                           }    

                           if(h)
                           {
                                                       printf("\nBill Found");
                                                  printf("\n------------------------------------------------------------");
                                                        printf("\nBill no:%d",b.billno);
                                                      printf("\nCustomer name:%s",b.cname);
                                                      printf("\nMedicine name:%s",b.mediname);
                                                      printf("\nMedicine Quantity:%d",b.medi_qty);
                                                      printf("\nMedicine rate:%d",b.medi_rate);
                                                      printf("\nTotal:%d",b.Total);
                                                      printf("\nDay:%s",b.Day);
                                                      printf("\nMonth:%s",b.Month);
                                                      printf("\nyear:%s\n",b.Year);
                                                 printf("\n------------------------------------------------------------");
                           } 
                           else{
                            printf("\nBill not found");
                           }
                           break;
                }
                  
                   case 3:

                   {    int jj=0;
                         FILE *fptr3=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\BillSlip.txt","r+");
                
                    while(fscanf(fptr3,"%d %s %s  %d %d %d %s %s %s",&b.billno,&b.cname,&b.mediname,&b.medi_qty,&b.medi_rate,&b.Total,&b.Day,&b.Month,&b.Year)!=EOF)
                           {   
                              printf("\n------------------------------------------------------------");
                                    
                                                      printf("\nBill no:%d",b.billno);
                                                      printf("\nCustomer name:%s",b.cname);
                                                      printf("\nMedicine name:%s",b.mediname);
                                                      printf("\nMedicine Quantity:%d",b.medi_qty);
                                                      printf("\nMedicine rate:%d",b.medi_rate);
                                                      printf("\nTotal:%d",b.Total);
                                                      printf("\nDay:%s",b.Day);
                                                      printf("\nMonth%s",b.Month);
                                                      printf("\nyear%s\n",b.Year);
                              printf("\n------------------------------------------------------------");
                              jj++;
                           }

                           printf("\nThe Total bills are:%d",jj);


                 break;
                  }
                 
                  default:
                  printf("\nWrong choice!");
             

              }
          }
         while (g<=3);
          

}
