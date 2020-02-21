#include<stdio.h>

#define notfound -1

int search(const int arr[],int target,int n)
{
	int i,
		found = 0,
		where;

	i= 0;
	while(!found && i<n)
	{
		if(arr[i] == target)
			found =1;
		else
			++i;
	}
	if(found)
		where =i;
	else
		where = notfound;

	return(where);
}

int 
main(void)
{
	int n,i,t,pos;

	printf("enter the number of elements>>\n ");
	scanf("%d",&n);
    int a[n];
	printf("enter the elements");
	
	for(i =0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
	printf("enter the target element >>\n");
	scanf("%d",&t);

	pos = search(a,t,n);
	if(pos!=-1)
	printf("%d is present at position %d",t,pos+1);

	else 
		printf("%d is not presaent in array",t);
}


