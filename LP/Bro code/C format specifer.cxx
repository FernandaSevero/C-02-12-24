#include<stdio.h>
int main()
{
	//%.1 = decimal precision
	//%1 = minimul field width (espaço lateral)
	//%- = left align
	
	 float item1 = 5.75;
	 float item2 = 10.00;
	 float iteem3 = 100.99;
	 
	 printf("Item 1 ; %3.1f \n",item1);
	 printf("Item 2 ; %-3.1f \n",item2);
	  
return 0;
}