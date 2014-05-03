/*
 * =====================================================================================
 *
 *       Filename:  2098.c
 *
 *    Description:  
 *    Problem Description
 *    把一个偶数拆成两个不同素数的和，有几种拆法呢？
 *    Input
 *    输入包含一些正的偶数，其值不会超过10000，个数不会超过500，若遇0，则结束。
 *    Output
 *    对应每个偶数，输出其拆成不同素数的个数，每个结果占一行。
 *    Sample Input
 *    30
 *    26
 *    0
 *    Sample Output
 *    3
 *    2
 *
 *        Created:  05/04/2014 00:30:48
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,c;
	//while(scanf("%d",&n),n){
	//	printf("%d\n",c);
	//}
	for(n=2;n<=5000;n++){
		for(c=2;c<n;c++)
			if(n%c==0)
				break;
		if(c==n)
			printf("%d ",c);
	}
	return 0;
}

/*
 * 2 3 5 7 11 13 17 19 23 29
 * 4 2+2
 * 6 3+3
 * 8 3+5
 * 10 3+7 5+5
 * 12 5+7
 * 14 7+7 3+11
 * 16 3+13 5+11
 * 18 5+13 7+11
 * 20 3+17 7+13
 * 22 3+19 5+17 11+11
 * 24 5+19 7+17 11+13
 */
