/*
功能说明：数字转16进制字符算法，反向输出
参数说明：dest输出数组，src源数据数组，length 数组长度
例如:
输入  77 	95 		69 
输出  ‘69’	‘95’ 	‘77’
*/
void To_String(uint8 *dest, char *src, uint8 length)
{
  uint8 *xad;
  uint8 ch;
  uint8 i=0;
  xad = src + length -1;
  for(i=0;i<length;i++,xad--)
  {
    ch = (*xad >> 4)& 0x0F;
    dest[i << 1] = ch + ((ch < 10) ? '0':'7');
    ch = *xad & 0x0F;
    dest[(i << 1) + 1] = ch + ((ch < 10) ? '0':'7');
  }
}


/*
单片机12864数据缓冲数组
C语言实验案例
*/
#include<stdio.h>
int buf[1024];
int x,y;
int p;
main()
{
	x=50;y=99;
	
	p=(x/8)*128+y;
	buf[p]=1<<(x%8);
	
	for(int i=0;i<64;i++){
		for(int j=0;j<128;j++){
			p=(i/8)*128+j;
			int num=buf[p] & ( 1<<(i%8) );
			printf("%d",num!=0);
		}
		printf("\n");
	}
	
	printf("Hello");
	return 0;
 } 
