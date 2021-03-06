/*
 * =====================================================================================
 *
 *       Filename:  1249.c
 *
 *    Description:  
 *    用N个三角形最多可以把平面分成几个区域?
 *    Input
 *    输入数据的第一行是一个正整数T(1<=T<=10000),表示测试数据的数量.然后是T组测试数据,每组测试数据只包含一个正整数N(1<=N<=10000).
 *    Output
 *    对于每组测试数据,请输出题目中要求的结果.
 *    Sample Input
 *    2
 *    1
 *    2
 *    Sample Output
 *    2
 *    8
 *
 *    Created:  07/14/2014 09:16:03
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int m,n,i,a[10001];
int main(){
	a[1]=2;
	a[2]=8;
	for(i=3;i<10001;i++)
		a[i]=a[i-1]+(i-1)*6;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		printf("%d\n",a[m]);
	}
	return 0;
}
/* 
 * 1 2
 * 2 8
 * 3 20
 *
 */
