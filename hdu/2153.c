/*
 * =====================================================================================
 *
 *       Filename:  2153.c
 *
 *    Description:  
 *    Problem Description
 *    在美丽的HDU，有一名大三的同学，他的速度是众所周知的，跑100米仅仅用了2秒47，在他跑步过程中会留下残影的哎，大家很想知道他是谁了吧，他叫仙人球，既然名字这样了，于是他的思想是单一的，他总是喜欢从一点出发，经过3次转折（每次向右转90°），回到出发点，而且呢，他每次转折前总是跑相同长度的路程，所以很多人都想知道如果用‘1’算他跑步出发的第一个残影的话，那么回到起点的时候，他的残影是怎么样的呢？
 *    Input
 *    测试数据有多行，每一行为一个数N(1<=N<=10)(以0结尾,0不做处理)，即仙人球在没有回到起点的时候，跑过留下N个残影后突然90°右转。
 *    Output
 *    每组测试数据输出一个结果，并且每个残影的计数位长度为3个字符长度。（当然N等于1的话，它的结果也是占用3个字符位置的）
 *    Sample Input
 *    4
 *    Sample Output
 *     1  2  3  4
 *    12        5
 *    11        6
 *    10  9  8  7
 *
 *        Created:  06/23/2014 23:58:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,j;
	while(scanf("%d",&n),n){
		if(n==1)
			printf("  1\n");
		else{
			for(i=1;i<=n;i++)
				printf("%3d",i);
			putchar('\n');
			for(i=1;i<n-1;i++){
				printf("%3d",4*n-3-i);
				for(j=0;j<n-2;j++)
					printf("   ");
				printf("%3d\n",n+i);
			}
			for(i=1;i<=n;i++)
				printf("%3d",3*n-1-i);
			putchar('\n');
		}
	}
	return 0;
}
