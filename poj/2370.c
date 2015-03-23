/*
 * =====================================================================================
 *
 *       Filename:  2370.c
 *
 *    Description:  
 *    In one of the countries of Caribbean basin all decisions were accepted by the simple majority of votes at the general meeting of citizens (fortunately, there were no lots of them). One of the local parties, aspiring to come to power as lawfully as possible, got its way in putting into effect some reform of the election system. The main argument was that the population of the island recently had increased and it was to longer easy to hold general meetings.
 *    The essence of the reform is as follows. From the moment of its coming into effect all the citizens were divided into K (may be not equal) groups. Votes on every question were to be held then in each group, moreover, the group was said to vote "for" if more than half of the group had voted "for", otherwise it was said to vote "against". After the voting in each group a number of group that had voted "for" and "against" was calculated. The answer to the question was positive if the number of groups that had voted "for" was greater than the half of the general number of groups.
 *    At first the inhabitants of the island accepted this system with pleasure. But when the first delights dispersed, some negative properties became obvious. It appeared that supporters of the party, that had introduced this system, could influence upon formation of groups of voters. Due to this they had an opportunity to put into effect some decisions without a majority of voters "for" it.
 *    Let's consider three groups of voters, containing 5, 5 and 7 persons, respectively. Then it is enough for the party to have only three supporters in each of the first two groups. So it would be able to put into effect a decision with the help of only six votes "for" instead of nine, that would .be necessary in the case of general votes.
 *    You are to write a program, which would determine according to the given partition of the electors the minimal number of supporters of the party, sufficient for putting into effect of any decision, with some distribution of those supporters among the groups.
 *    Input
 *    The input of this problem contains two lines. In the first line an only natural number K <= 101 — a quantity of groups — is written. In the second line there are written K natural numbers, separated with a space. Those numbers define a number of voters in each group. In order to simplify the notion of "the majority of votes" we'll say that the number of groups also as the number of voters in each group is odd. You may also consider, that the population of the island does not exceeds 10001 persons.
 *    Output
 *    You should write an only natural number — a minimal quantity of supporters of the party, that can put into effect any decision.
 *    Sample Input
 *    3
 *    5 7 5
 *    Sample Output
 *    6
 *
 *        Created:  03/23/2015 20:42:15
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
int main(){
	int k,i,a[110],sum=0;
	scanf("%d",&k);
	for(i=0;i<k;++i)
		scanf("%d",&a[i]);
	qsort(a,k,sizeof(int),cmp);
	for(i=0;i<k/2+1;++i)
		sum+=a[i]/2+1;
	printf("%d\n",sum);
	return 0;
}
