#include<stdio.h>
int main(){
	char A,a,B,b,C,c,D,d,E,e,F,f,G,g,H,h,I,i,J,j,K,k,L,l;
	
	
	
	printf("Enter month letter: ");
	scanf("%c",&A,a,B,b,C,c,D,d,E,e,F,f,G,g,H,h,I,i,J,j,K,k,L,l);
	
	
	
	switch(A){
		    case 'A' :
		    case 'a' :
			    printf("January");
			    break;
			case 'B' :
		    case 'b' :
			    printf("February");
			    break;
			case 'C' :
		    case 'c' :
			    printf("March");
			    break;
			case 'D' :
		    case 'd' :
			    printf("April");
			    break;
			case 'E' :
		    case 'e' :
			    printf("May");
			    break;
			case 'F' :
		    case 'f' :
			    printf("Jun");
			    break;
			case 'G' :
		    case 'g' :
			    printf("July");
			    break;
			case 'H' :
		    case 'h' :
			    printf("August");
			    break;
			case 'I' :
		    case 'i' :
			    printf("September");
			    break;
			case 'J' :
		    case 'j' :
			    printf("Octomber");
			    break;
			case 'K' :
		    case 'k' :
			    printf("November");
			    break;
			case 'L' :
		    case 'l' :
			    printf("December");
			    break;    
														    
	}
	
	return 0;
}


