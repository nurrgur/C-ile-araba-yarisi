#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
	int doganSLXPuan=0,ferrariPuan=0;
	int sayi,x,y;
	
	srand(time(NULL)); 
	void goster(){
		printf("Gelen sayi: %d \n",sayi);
		for(x=1; x<=doganSLXPuan;x++){
    		printf(" ");
		}
		printf("X\n");
		for(y=1;y<=ferrariPuan;y++){
			printf(" ");
		}
		printf("F\n");
		printf("doganSLXPuan: %d\n",doganSLXPuan);
		printf("ferrariPuan: %d\n",ferrariPuan);


	}
	while(1){
		sleep(1);
	    system("CLS");
	sayi= rand()%10+1; 
    
    if(sayi==1||sayi==2){
    	doganSLXPuan=doganSLXPuan+3;
    	goster();
    	
	}
	else if(sayi==3||sayi==4){
		doganSLXPuan=doganSLXPuan+3;
		ferrariPuan=ferrariPuan+9;
		goster();
	}
	else if(sayi==5){
		doganSLXPuan=doganSLXPuan+3;
		ferrariPuan=ferrariPuan-12;
		if(ferrariPuan<0){
			ferrariPuan=0;
		}
		goster();
	}
	else if(sayi==6||sayi==7){
		doganSLXPuan=doganSLXPuan-6;
		ferrariPuan=ferrariPuan+1;
		if(doganSLXPuan<0){
			doganSLXPuan=0;
		}
		goster();
	}
	
	else if(sayi==8){
		doganSLXPuan=doganSLXPuan+1;
		ferrariPuan=ferrariPuan+1;
		goster();
	}
	else if(sayi==9||sayi==10){
		doganSLXPuan=doganSLXPuan+1;
		ferrariPuan=ferrariPuan-2;
		if(ferrariPuan<0){
			ferrariPuan=0;
		}
		goster();
	}
	
    if(ferrariPuan>=100){
	    printf("Ferrari KAZANDI");
	    break;
    }
    if(doganSLXPuan>=100){
    	printf("DoganSLX KAZANDI");
    	break;
    }
    
    
	}
	
}
