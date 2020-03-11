/*读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
题目给出了n的范围最大不超过10的100次方，所以也就是输入的n最大为100位，可以定义数组a[100] 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"},c[100];
    int num=0,i;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
	 	num+=(a[i]-'0');
	}
	int j=0;
	while(num!=0)
	{
		c[j] = (num%10) + '0';
		num/=10;
		j++;
	}
	int k;
	for(k=strlen(c)-1;k>=0;k--)
	{
		if(k!=0)printf("%s ", b[c[k]-'0']);
		else printf("%s",b[c[k]-'0']);
	}
return 0;
}
