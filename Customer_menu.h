// //
#include<stdio.h>
#include<string.h>
#include"customer.h"
#include"cust_search.h"
#include"search_cid.h"
#include"search_cname.h"
#include"cust_entry.h" 
#include"cust_list.h"
#include"cust_update.h"
            
void Customer_menu()

{     
            int a;  // for taking choice.
       do
       {
            printf("----------------------------------------------");
           printf("\nCustomer information:\n");
           printf("\n1:Customer\n");
           printf("\n2:Customer search\n");
           printf("\n3:Search customer by id\n");
           printf("\n4:customer search by name\n");
           printf("\n5:customer entry\n");
           printf("\n6:Total customer list\n");
           printf("\n7:Customer updation\n");
           printf("\n----------------------------------------------");
      
           printf("\nEnter your choice:");
               scanf("%d",&a);
          printf("----------------------------------------------\n");
        switch (a)
          {
            case 1:
             customer();
             break;

             case 2:
              cust_search(); 
             break;

             case 3:
              search_cid();
             break;

             case 4:
               search_cname();
             break;

             case 5:
               cust_entry(); 
             break;

              case 6:
               cust_list(); 
             break;

              case 7:
             cust_update();   
             break;

             default:
             printf("\nWrong choice");
          }
        
       } while (a<=7);

      
}
