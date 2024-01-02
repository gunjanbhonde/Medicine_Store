

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



 void  sup_update()
{ 

  // char id[100];
  char name[100];
  char mobno[100]; 
  char city[100];
  char email[100]; 
	

   int i;
     int flag=0;
   
     FILE *fptr2=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\supplier.info.txt","r");
   
     FILE *fptr7=fopen("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\temp4_supp.txt","a+");

        
        printf("\nEnter the Supplier id you want to search and update information");
        scanf("%d",&i);
       
       
          while(fscanf(fptr2,"%d%s%s%s%s",&s.supp_id,&s.supp_name,&s.temp1_mob_no,&s.temp1_city,&s.temp1_email)!=EOF)
         {
              if(s.supp_id==i)
              {   
                  	flag=1;
		                 printf("Enter the  name of Supplier:");
                     fflush(stdin);
                     gets(name);
	    	             printf("Enter the Temprary1 mob no:");
                     fflush(stdin);
                     gets(mobno);
		                 printf("Enter the Temp1 city:");
                     fflush(stdin);
		                	gets(city);
		                 printf("Enter the Temprary1 Email :");
                     fflush(stdin);
			               gets(email);

		                fprintf(fptr7,"%d\t\t%s\t\t\t%s\t\t\t%s\t\t%s\n",i,name,mobno,city,email);
                   
			             continue;	
		          }
	           	else{
		                  fprintf(fptr7,"%d\t\t%s\t\t\t%s\t\t\t%s\t\t%s\n",s.supp_id,s.supp_name,s.temp1_mob_no,s.temp1_city,s.temp1_email);	
                          
	        	      }

         }      

             if(flag)

               {

                 printf("\nSupplier Data Changed Successfully!");
               }
            else{
                printf("\nWrong or invalid Supplier id");
                }          
                
                
              
	        fclose(fptr2);
	        fclose(fptr7);
remove("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\supplier.info.txt");
	rename("C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\temp4_supp.txt","C:\\Users\\hp\\Desktop\\coding\\c\\c lang ppp\\ppp\\supplier.info.txt");
	

   
  
   
}               
           


	

       
    
        
