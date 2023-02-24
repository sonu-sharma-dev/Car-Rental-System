#include<stdio.h>
#include<conio.h>
#define SIZE 30
int main()
{
    int s,d,l,v,n,t,p;
    char name[SIZE];
 
    printf("\n \t\t\t\t\t\t **********\n");  
    printf("\t\t\t\t\t\t Rent A Car \n");  
    printf("\t\t\t\t\t\t **********\n"); 
    
    
    printf("\n Enter your Full Name:");
    gets(name);
    printf("\n Enter your phone no:");
    scanf("%d",&p);
    
    printf("\n For how many days you want a car: ");
    scanf("%d",&n);
    printf("\n ----------------------- \n");
    printf("\n Press 1 For  5 Seater");
    printf("\n Press 2 For  Long Trip Vehicle (more than 5 seater)");
    printf("\n Press 3 For  Luxury Vehicle \n");
    printf("\n ---------------------------- \n");
    printf("\n ---------------------------- \n");
    printf("\n Please Click Option According To Your Condition: ");
    scanf("%d", &s);
   

    switch(s)
    {
        case 1:
        printf("\n You have chosen 5 Seater Vehicle \n");
        printf("\n Vehicle Available are : \n");
        printf("\n Vitz , Corolla , Civic, Mehran, Toady \n");
        printf("\n ------------------------------ \n");
        printf("\n Your Vehicle :Press\n1 for Vitz | Cost 4000rs per day\n2 For Corolla | Cost 5000rs per day\n3 For Civic | Cost 6000rs per day\n4 for Mehran | Cost 4000rs per day\n5 for Toady | Cost 8000rs per day\n ");
        scanf("%d", &d);
        printf("\n ----------------------- \n");
        switch(d)
        {
            case 1:
            printf("\n You have selected Vitz \n");
            t=n*4000;
            printf("\n your amount is:%d\n",t);
            break;

            case 2:
            printf("\n You have selected Corolla \n");
            t=n*5000; 
            printf("\n your amount is:%d\n",t);
            break;

            case 3:
            printf("\n You have selected Civic \n");
            t=n*6000;
            printf("\n your amount is:%d\n",t);
            break;
            
            case 4:
            printf("\n You have selected Mehran \n");
            t=n*4000;
            printf("\n your amount is:%d\n",t); 
            break;
            
            case 5:
            printf("\n You have selected Toady \n");
            t=n*8000;
            printf("\n your amount is:%d\n",t);
            break;
            
        }
        
        printf("\n ----------------------- \n");
        printf("\n Do You Want driver ? \n");
        printf("\n Driver charges:500 per day \n");
        printf("\n Press 1 For Yes | 2 For No \n");
        scanf("%d" , &d);
        
        switch(d)
        {     	
            case 1:
            printf("\n---------------------------------\n");
            printf("\n You have seleced driver \n");
            printf("\n you total is %d",n*500+t);
            printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
        	case 2:
        	printf("\n---------------------------------\n");
        	printf("\n Your Vehicle is Ready");
        	printf("\n your total amount is:%d",t);
        	printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
		}
        break;

        case 2:
        printf("\n You have chosen Long Trip Vehicles \n");
        printf("\n Vehicles Available are :\n");
        printf("\n Hiace(20 seater) , Bus(50 seater) , Coach(50 seater) , MiniBus(25 seater) , MiniCoach(25 seater)  \n");
        printf("\n ----------------------------- \n");
        printf("Your Vehicle :Press\n 1 For Hiace | Cost 10000rs per day \n 2 For Bus | Cost 12000rs per day \n 3 For Coach | Cost 12000rs per day \n 4 For MiniBus | Cost 8000rs per day \n 5 For MiniCoach | Cost 8000rs per day \n");
        scanf("%d", &l);
        
        switch (l)
        {
            case 1:
            printf("\n You have selected Hiace \n");
            t=n*10000;
            printf("\n your amount is:%d\n",t);
            break;

            case 2:
            printf("\n You have selected Bus \n");
            t=n*12000;
            printf("\n your amount is:%d\n",t);
            break;
            case 3:
            printf("\n You have selected Coach |\n");
            t=n*12000;
            printf("\n your amount is:%d\n",t);
            break;
            case 4:
            printf("\n You have selected MiniBus \n");
            t=n*8000;
            printf("\n your amount is:%d\n",t);
            break;
            case 5:
            printf("\n You have selected MiniCoach \n");
            t=n*8000;
            printf("\n your amount is:%d\n",t);
            break;

        }
        printf("\n ----------------------- \n");
        printf("\n Do You Want driver ? \n");
        printf("\n Driver charges 500 per day");
        printf("\n Press 1 For Yes | 2 For No \n");
        scanf("%d" , &d);
        printf("\n ----------------------- \n");
        
        switch(d)
        {     	
            case 1:
            printf("\n---------------------------------\n");
            printf("\n You have seleced driver \n");
            printf("\n you total is %d",n*500+t);
            printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
        	case 2:
        	printf("\n---------------------------------\n");
        	printf("\n Your Vehicle is Ready");
        	printf("\n your total amount is:%d",t);
        	printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
		}
        break;

        case 3:
        printf("\n You have chosen Luxury Car \n");
        printf("\n Vehicles Available are : \n");	
        printf("\n Mercedes-BENZ , BMW M5 , AUDI A8 , Range Rover , Rolls-Royce \n");
        printf("\n ------------------------------ \n");
        printf("\n Your Vehicles :Press\n 1 For Mercedes-Benz | Cost 40,000rs per day \n 2 For BMW M5 | Cost 45,000rs per day \n 3 For Audi A8 | Cost 50,000rs per day \n 4 For Rolls-Royce | Cost 80,000rs per day\n 5 For Range Rover | Cost 70,000rs per day \n");
        scanf("%d", &v);
        
        switch(v)
        {
            case 1:
            printf("\n You have selected Mercedes-Benz \n");
            t=n*40000;
            printf("\n your amount is:%d\n",t);
            break;

            case 2:
            printf("\n You have selected BMW M5 \n");
            t=n*45000;
            printf("\n your amount is:%d\n",t);
            break;

            case 3:
            printf("\n You have selected Audi A8 \n");
            t=n*50000;
            printf("\n your amount is:%d\n",t);
            break;
            
            case 4:
            printf("\n You have selected Rolls-Royce \n");
            t=n*80000;
            printf("\n your amount is:%d\n",t);
            break;
            
             case 5:
            printf("\n You have selected  Range Rover \n");
            t=n*70000;
            printf("\n your amount is:%d\n",t);
            break;
        }
        printf("\n ----------------------- \n");
        printf("\n Do You Want driver ? \n");
        printf("\n Driver charges is 500 per day");
        printf("\n Press 1 For Yes | 2 For No \n");
        scanf("%d" , &d);
        
        switch(d)
        {     	
           case 1:
            printf("\n---------------------------------\n");
            printf("\n You have seleced driver \n");
             t=n*500+t;
            printf("\n your total is %d",t);
            // printf("\n you total is %d",n*500+t);
            printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
        	case 2:
        	printf("\n---------------------------------\n");
        	printf("\n Your Vehicle is Ready");
        	printf("\n your total amount is:%d",t);
        	printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
		}
			break;
    }
     FILE *fp;
     //writing to file
    fp=fopen("file.txt","w");
    fprintf(fp,"%s",name);
    fprintf(fp,"%d",t);
    printf("File Writting successful\n");
    fclose(fp);
    //reading from file
    fp=fopen("file.txt","r");
    fscanf(fp,"%s",name);
    fscanf(fp,"%d",t);
    printf("Read from file: %s %d",name,t);
    fclose(fp);
    return 0;
}
