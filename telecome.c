#include<stdio.h>
int main(){
	int a=1;
	int b=2;
	
	printf("1.Post Paid Recharge\n");
	printf("2.Pre-Paid Recharge\n");
	
	printf("enter no.: ");
	scanf("%d",&a,b);
	
	switch(a){
		case 1 :
		    	printf("Sorry we have not able to recharge please visit near customer care center.");
			    break;
		}
	switch(b){
		case 2 :
			    printf("1. Recharge for data\n");
				printf("2. Rechage for Calling\n");
				printf("enter no.: ");
				scanf("%d",&a,b);
			switch(a){
				case 1 :
					printf("Recharge for 1GB data/day\n");
					printf("Recharge for 2GB data/day\n");
					}	
			switch(b){
				case 2 :
					printf("Recharge for unlimited calls 100 rs/month\n");
					printf("Recharge for unlimited calls and 100 massages 150 rs/month\n");
					}	
				
		}
	return 0;
}
