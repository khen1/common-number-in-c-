#include<stdio.h>
#include<stdlib.h>

int main(){
	int value[4],i,j=0;
	for(i=0;i<=5;i++){
		printf("Number: ");
		scanf("%d",&value[i]);
	}
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			if(i==j)
				continue;
		if(value[i]==value[j]){
			if(i<j)
				printf(" \n the %d ",value[i]);
		}
	}
	}

}