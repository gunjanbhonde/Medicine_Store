
#include<stdio.h>
#include<string.h>
#include"supplier.h"
#include"supp_entry.h"
#include"supp_list.h"
#include"sup_update.h"
#include"search.h"
#include"search_id.h"
#include"search_name.h"


void Supplier_menu() 

{  int c;  // for taking choice.
       do
       {
           printf("\n----------------------------------------------\n");
           printf("\nSupplier information:\n");
           printf("\n1:Supplier");
           printf("\n2:Supplier entry");
           printf("\n3:Supplier list");
           printf("\n4:Supplier update");
           printf("\n5:search");
           printf("\n6:Supplier search by id");
           printf("\n7:supplier search by name");
          printf("\n----------------------------------------------\n");
           printf("\nEnter your choice:\n");
           scanf("%d",&c);
        switch (c)
           
           { case 1:
             supplier();
             break;

             case 2:
             supp_entry(); 
             break;

             case 3:
              supp_list(); 
             break;

             case 4:
             sup_update(); 
             break;
            
             case 5:
                search();
             break;

             case 6:
              search_id(); 
             break;

              case 7:
              search_name(); 
             break;

               default:
                printf("Wrong chooice");
           }
       } while (c<=7);

       
       
}
