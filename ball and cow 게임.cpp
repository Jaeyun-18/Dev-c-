#include <stdio.h> //랜덤 함수를 사용하기 위해 필요한 stdlib.h 라이브러리 
#include <stdlib.h> //시간 함수를 사용하기 위해 필요한 time.h 라이브러리 
#include <time.h> 

int main( ) 
{    
	srand(time(NULL));  //시간 함수를 이용하여 난수가 생성되도록 설정    
	int num1, num2, num3;        
	
	num1 = rand( ) % 10;   //rand( ) 함수의 결과는 0 ~ 32767 범위에서 값 생성    
	do
	{ 
		num2 = rand( )% 10; 
	}while(num2 == num1);    
	
	do
	{
		num3 = rand( )% 10; 
	}while(num3 == num2 || num3 == num1);
    
	int cnt = 0;    
	int strike, ball;    
	do    
	{        
		if(cnt >= 7) break;        
		strike = 0, ball = 0;                
		int input;
		scanf("%d", &input);        
		
		if(input >= 1000 || input < 100)        
		{            
			printf("input 3 - digit numbers\n");            
			continue;        
		}                
		
		int d1, d2, d3;        
		d1 = input / 100;
 		d2 = ( input % 100) / 10;        
		d3 = input % 10;        
		cnt ++;        
		
		if(d1 == d2 || d2 == d3 || d1 == d3)        
		{            
			printf("%d count : number overlap\n", cnt);            
			continue;        
		}                
		
		if(num1 == d1) strike ++;        
		else if(num1 == d2 || num1 == d3) ball += 1;
        
		if(num2 == d2) strike ++;        
		else if(num2 == d1 || num2 == d3) ball += 1;
        
		if(num3 == d3) strike ++;        
		else if(num3 == d1 || num3 == d2) ball += 1;                
		
		printf("%d count : %d Strike, %d Ball\n", cnt, strike, ball);    
	}while(strike != 3);        
	
	if(cnt >= 7)        
		printf("Fail! Answer Number : %d%d%d", num1, num2, num3);    
	
	else        
		printf("SUCCESS! Try count : %d", cnt);        
		
	return 0; 
}
