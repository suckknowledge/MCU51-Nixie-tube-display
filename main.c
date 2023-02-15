#include <regx52.h>
unsigned int arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0xfd,0x07,0x7f,0xef};
void delay(unsigned int a)
{
	while(a--);
}

void px(unsigned int a,unsigned int b)
{
	switch(a)
	{
		case 1:P2_4=0;P2_3=0;P2_2=0;break;
		case 2:P2_4=0;P2_3=0;P2_2=1;break;
		case 3:P2_4=0;P2_3=1;P2_2=0;break;
		case 4:P2_4=0;P2_3=1;P2_2=1;break;
		case 5:P2_4=1;P2_3=0;P2_2=0;break;
		case 6:P2_4=1;P2_3=0;P2_2=1;break;
		case 7:P2_4=1;P2_3=1;P2_2=0;break;
		case 8:P2_4=1;P2_3=1;P2_2=1;break;
	}
	P0=arr[b];
	delay(1);
	P0=0x00;
	
}

void main()
{
	while(1)
	{
		px(8,0);
		px(7,3);
		px(6,5);
		px(5,2);
		px(3,0);
		px(2,9);
		px(1,1);
		px(4,7);
	}
}