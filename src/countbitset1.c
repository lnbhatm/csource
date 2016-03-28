#include<stdio.h>






int countSetBits(unsigned int n)
{
  int nSetBitCount=0;
  while(n)
  {    
   	nSetBitCount=nSetBitCount+(n&1);
  	n=n>>1;
  }
  return(nSetBitCount);
}








/* Program to test function countSetBits */
int main()
{
	
    int i = 0;
    
    for (i=0;i<16;i++)
    {
      printf("int [%2d]: No of set Bits: %d\n", i, countSetBits(i)); 	
	}
    
    
    return 0;
}
