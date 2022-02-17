//to do list-
//1.entre the numbers for no. of ingredients liked an ddisliked
//2.name of the ingredients liked and disliked
//3.prabably if else statement to find if costumer will accept the pizza or not
//4.creating structure for the costumer details
//5. find a way to write string for ingredients




#include<stdio.h>

struct costumer
{
	int liked;//ingredients liked 
	int disliked;//ingredients disliked
	char liked_ing[500];//name of liked ingredients
	char disliked_ing[500];//nam of disliked ingredients
};
void calllike(int);
void calldisliked(int);
 int main()
{
	int a,i;
	printf("enter the no.of costumers");
	scanf("%d",&a);//no.of customers
	struct costumer e;
	for(i=1;i<=a;i++)
	{
		printf("enter no. of ingredients liked");
		scanf("%d",&e.liked);
		/*printf("enter the names of ingredients liked");
		scanf("%s",e.liked_ing);*/
		calllike(e.liked);
		printf("enter the no.of ingredients disliked");
		scanf("%d",&e.disliked);
		calldisliked(e.disliked);
		/*printf("enter the names of the ingredientd disliked");
		scanf("%s",e.disliked_ing);*/
	}
	/*for(j=1;j<=liked;j++)
	{
		printf("enter the names of ingredients liked");
		scanf("%s",e.liked_ing);
	}*/
	
	
	
}
void calllike(int liked)
{
	int j;
	struct costumer e;
	for(j=1;j<=liked;j++)
	{
		printf("enter the names of ingredients liked");
		scanf("%s",e.liked_ing);
	}
	
}

void calldisliked(int disliked)
{
	int k;
	struct costumer e;
	for(k=1;k<=disliked;k++)
	{
		printf("enter the names of the ingredientd disliked");
		scanf("%s",e.disliked_ing);
	}
}
