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

