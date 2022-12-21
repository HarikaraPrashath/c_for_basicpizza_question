#include<stdio.h>
int main(void){
	
	int type;
	char size,credti,loyal,online;
	char say;
	int number;
	float payment=0,discount;
	float creadit_dis,loyal_pay,online_pay;
	
	printf("enter the pizz type :");
	scanf("%d%*c",&type);
	while(type !=-1){
	
	printf("enter the pizz size :");
	scanf("%c%*c",&size);
	
	printf("enter the pizz number :");
	scanf("%d",&number);
	
	 if(type==1){
	 	 if(size =='L'){
	 	 	payment=payment +(1720*number);
	 	 
		  }
		  else if (size == 'M'){
		  	payment = payment +(975*number);
		  	
		  }
	 }
	 else if(type ==2){
	 	
	   if(size =='L'){
	 	 	payment = payment +(1820*number);
	 	 	
		  }
		  else if (size == 'M'){
		  	payment =payment+( 1000*number);
		  	
		  }

}
	printf("enter the pizz type :");
	scanf("%d%*c",&type);
}

printf("your payment is %f\n",payment);
    
	0
	printf("are you pay by creatid card (Y/N):");
scanf("%c",&credti);
if(credti == 'Y'){
	discount=payment-(payment*20/100.0);
}
printf("are you loyalty customer (Y/N):");
scanf("%c%*c",&loyal);
if(loyal =='Y'){
	discount=payment-(payment*15/100.0);
}
printf("Is this online order (Y/N):");
scanf("%c%*c",&online);
if(online =='Y'){
	discount=payment-(payment*5/100.0);
}

printf("your payment is %f\n",payment);
printf("discount : %f",discount);
printf("now amount : %f",payment-(creadit_dis+loyal_pay+online_pay));  


return 0;
}


