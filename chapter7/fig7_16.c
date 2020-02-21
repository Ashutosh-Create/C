/*
 * * Finds the position of the smallest element in the subarray
 * * list[first] through list[last].
 * * Pre: first < last and elements 0 through last of array list are defined.
 * * Post: Returns the subscript k of the smallest element in the subarray;
 * *
 * i.e., list[k] <= list[i] for all i in the subarray
 * */

#include<stdio.h>

int get_min_range(int list[], int first, int last);
/*
 * * Sorts the data in array list
 * * Pre: first n elements of list are defined and n >= 0
 * */
void
select_sort(int list[],int n)
{
	int fill,
		temp,
		index_of_min;

	for (fill =0;fill<n-1;++fill)
	{
		index_of_min = get_min_range(list, fill, n-1);

		if (fill!= index_of_min)
		{
			temp = list[
