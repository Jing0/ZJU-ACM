/*
 * =====================================================================================
 *
 *       Filename:  2550.c
 *
 *    Description:  
 *    Problem Description
 *    时维九月,序属三秋,辽军大举进攻MCA山,战场上两军正交锋.辽军统帅是名噪一时的耶律-James,而MCA方则是派出了传统武将中草药123.双方经过协商,约定在十一月八日正午十分进行射箭对攻战.中草药123早早就开始准备,但是他是武将而不是铁匠,造弓箭的活就交给聪明能干的你了,现在告诉你每种弓箭规格,即箭身的长度,以及每种规格弓箭所需要的数目,要求你把需要的弓箭都输出.
 *    弓箭的基本样子为 ">+---+>",其中"+---+"为箭身,数据保证箭身长度 > 2
 *    Input
 *    首先输入一个t,表示有t组数据，跟着t行：
 *    每行一个N (N < 50 ),接下去有N行,第i行两个整数Ai , Bi,分别代表需要箭身长度为Ai的弓箭Bi枝. (Ai < 30 , Bi < 10 )
 *    输入数据保证每一个Ai都是不同的.
 *    Output
 *    按照箭身的长度从小到大的顺序依次输出所有需要的弓箭,"每一种"弓箭后输出一个空行.
 *    Sample Input
 *    1
 *    4
 *    3 4
 *    4 5
 *    5 6
 *    6 7
 *    Sample Output
 *    >+-+>
 *    >+-+>
 *    >+-+>
 *    >+-+>
 *
 *    >+--+>
 *    >+--+>
 *    >+--+>
 *    >+--+>
 *    >+--+>
 *
 *    >+---+>
 *    >+---+>
 *    >+---+>
 *    >+---+>
 *    >+---+>
 *    >+---+>
 *
 *    >+----+>
 *    >+----+>
 *    >+----+>
 *    >+----+>
 *    >+----+>
 *    >+----+>
 *    >+----+>
 *
 *        Version:  1.0
 *        Created:  04/15/2014 22:32:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n[10000],a[50],b[50],i,j,k,l,temp;
	while(scanf("%d",&t)!=EOF)
		for(k=0;k<t;k++)
			while(scanf("%d",&n[k])!=EOF){
				for(i=0;i<n[k];i++)
					scanf("%d%d",&a[i],&b[i]);
				for(i=0;i<n[k];i++)
					for(j=0;j<n[k]-i-1;j++)
						if(a[j]>a[j+1]){
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
							temp=b[j];
							b[j]=b[j+1];
							b[j+1]=temp;
						}
				for(i=0;i<n[k];i++)
					for(l=0;l<b[i];l++){
						printf(">+");
						for(j=0;j<a[i]-2;j++)
							printf("-");
						printf("+>\n%s",(l==b[i]-1)?"\n":"");
					}
			}
	return 0;
}

/* 
 *    1
 *    4
 *    3 4
 *    4 5
 *    5 6
 *    6 7
 *
 */
