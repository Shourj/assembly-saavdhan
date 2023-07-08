 #include<lpc214x.h>
 void delay()
 {
 int i,j;
 for (i=0;i<2000;i++)
 for (j=0;j<2000;j++);
 }
 void main()
 {
 PINSEL2=0;
 IODIR1=0x80010000;

 while(1)
 {
 IOSET1=0x80010000;
 delay();
 IOCLR1=0x80010000;
 delay();
 }
 }