/*
 * =====================================================================================
 *
 *       Filename:  2027.c
 *
 *    Description:  
 *    Problem Description
 *    统计每个元音字母在字符串中出现的次数。
 *    Input
 *    输入数据首先包括一个整数n，表示测试实例的个数，然后是n行长度不超过100的字符串。
 *    Output
 *    对于每个测试实例输出5行，格式如下：
 *    a:num1
 *    e:num2
 *    i:num3
 *    o:num4
 *    u:num5
 *    多个测试实例之间由一个空行隔开。
 *    请特别注意：最后一块输出后面没有空行：）
 *
 *    Sample Input
 *    2
 *    aeiou
 *    my name is ignatius
 *
 *    Sample Output
 *    a:1
 *    e:1
 *    i:1
 *    o:1
 *    u:1
 *
 *    a:2
 *    e:1
 *    i:3
 *    o:0
 *    u:1
 *
 *        Version:  1.0
 *        Created:  04/10/2014 22:57:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char c;
	int n,num1,num2,num3,num4,num5;
	while(scanf("%d",&n)!=EOF){
		getchar();
		while(n--){
			for(num1=num2=num3=num4=num5=0;(c=getchar())!='\n';)
				switch(c){
					case('a'):
					case('A'):num1++;break;
					case('e'):
					case('E'):num2++;break;
					case('i'):
					case('I'):num3++;break;
					case('o'):
					case('O'):num4++;break;
					case('u'):
					case('U'):num5++;break;
				}
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n%s",num1,num2,num3,num4,num5,(n==0)?"":"\n");
		}
	}
	return 0;
}
