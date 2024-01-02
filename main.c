/*  Medical Store Management Project Structure:
This mini project is a very comprehensive one. For this project you need to use
the file handling concept in c. The whole project is based on file handling as 
all medical records are stored in file. You also need to use the data structure
concept that can be used to store and organize records. Overall, understanding
this project will provide you valuable information on how to store, edit, 
search and delete data using file.
*/

/*
  1.Customer Info
  2. Medicine
  3. Supplier Info 
  4. Billing 
  5. About 
  6. Exit*/
 #include<stdio.h>
 #include"Customer_menu.h"
 #include"Medicine_menu.h"
 #include"Supplier_menu.h"
 #include"Bill_slip.h"
 #include"About_menu.h"
 #include"Exit.h"
int main()
{
  int choice;
       do
       {   printf("----------------------------------------------");
           
           printf("\nWelcome to the Medical Store!\n");
           printf("\n1:Customer Info\n");
           printf("\n2:Medicine\n");
           printf("\n3:Supplier Info\n");
           printf("\n4:Billing\n");
           printf("\n5:About\n");
           printf("\n6:Exit\n");
           printf("\n----------------------------------------------\n");
             // for taking choice.
           printf("\nEnter your choice:");
           scanf("\n%d",&choice);
         
          switch (choice)
         
         {  
            case 1:
              Customer_menu();
            break;

             case 2:
                Medicine_menu();
             break;

             case 3:
              Supplier_menu();
             break;

             case 4:
              Bill_slip();
             
             break;

             case 5:
               About_menu();
             break;

              case 6:
               Exit();
             break;

            default:
            printf("Wrong choice!");
         
         }
       }while(choice<6);
       
       }
       
     
  
/*
  int choice : for the main file switch case.
  int a: for the customer info switch case.
  int b: for the medicine info switch case.
  int c: for the Supplier info switch case.

*/
