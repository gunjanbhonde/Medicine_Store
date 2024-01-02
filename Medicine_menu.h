//
#include<stdio.h>
#include<string.h>
#include"medicine.h"
#include"update_stock.h"
#include"medi_entry.h"
#include"medi_sale.h"
#include "medi_search.h"
#include"stock.h"
 
 void Medicine_menu()


{   int b;  // for taking choice.
       do
       {
           printf("\n----------------------------------------------");
           printf("\nMedicine menu:\n");
           printf("\n1:Medicine");
           printf("\n2:Update_stocks");
           printf("\n3:medi_entry");
           printf("\n4:medi_sale");
           printf("\n5:medi_search");
           printf("\n6:stock\n");
           printf("\n----------------------------------------------");
           printf("\nEnter your choice:");
           scanf("%d",&b);
        switch (b)
         
         {   case 1:
            medicine();       
             break;

             case 2:
             update_stock(); //  remain
             break;

            case 3:
              medi_entry();
             break;

             case 4:
             medi_sale();   //remain
             break;

             case 5:
             medi_search();
             break;

            case 6:
               stock();
             break;
             default:
             printf("Wrong choice");
         }   
       } while (b<=6);

       
       
}
