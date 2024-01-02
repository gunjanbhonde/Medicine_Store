
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



 void  cust_update()
{ 

  // int  id;
	char name[90];
	char city[90];
	char mobile[90];
	char email[90];
	

    int i;
     int flag=0;
       
    FILE *fptr=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt","r");
    FILE *fptr6=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\temp1_cust.txt","w+");

        
        printf("\nEnter the customer id you want to  update information:");
        scanf("%d",&i);
       
       
          while(fscanf(fptr,"%d%s%s%s%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
         {
          		              //   printf("%d\t%s\t%s\t%s\t%s\n",c.cust_id,c.cust_name,c.cust_city,c.mob_no,c.email);
              if(c.cust_id==i)
              {   flag=1;
                  	
		                 printf("Enter the  name of customer:");
                     fflush(stdin);
                     gets(name);
	    	             printf("Enter the City of customer:");
                     fflush(stdin);
                     gets(city);
		                 printf("Enter the Mobile of customer:");
                     fflush(stdin);
		                 gets(mobile);
		                 printf("Enter the Email of customer:");
                     fflush(stdin);
			               gets(email);

		                fprintf(fptr6,"%d\t\t%s\t\t\t%s\t\t\t%s\t\t%s\n",i,name,city,mobile,email);
                   
			             continue;	
		          }
	           	else{
		                  fprintf(fptr6,"%d\t\t%s\t\t\t%s\t\t\t%s\t\t%s\n",c.cust_id,c.cust_name,c.cust_city,c.mob_no,c.email);	
                          
	        	      }

         }      


         if(flag)

         {

           printf("\nCustomer Data Changed Successfully!");
         }
        else{
                printf("\nWrong or invalid customer id");
        }        
               
       
      
	        fclose(fptr);
	        fclose(fptr6);
remove("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt");
	rename("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\temp1_cust.txt","C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\customer_info.txt");
	

   
  
   
}               
           


	

       
    
        
