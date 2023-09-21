#include<stdio.h>
#include<stdlib.h>	
	void mod(){
		int i,table[i];
		if (table[i]%2!==0){
			printf("%d\t",table[i]);
		}
	}
int main(){
 int table [6];
int i,j;
int num;
for(i=0;i<6;i++){
printf("entrer le numero: ");
scanf("%d",&table[i]);
	}
	for(i=0;i<6;i++){
		
		for(j=i+1;j<6;j++){
			if(table[i]<table[j]){
				
				num=table[i];
				table[i]=table[j];
				table[j]=num;
				
			}
		}
	}
	printf("les nombre order: ");
	
	for(i=0;i<6;i++){
		{
		mod();
	}
	
}
	
}
