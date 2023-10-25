/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:33:28 by fizad             #+#    #+#             */
/*   Updated: 2023/08/23 21:32:27 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*range_arr;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	range_arr = (int *)malloc(sizeof(int) * range);
	i = 0;
	if (range_arr == NULL)
		return (0);
	while (i < range)
	{
		range_arr[i] = min + i;
		i++;
	}
	return (range_arr);
}

/*
#include <stdio.h>

int main(void)
{
	int min = -1;
	int max = 17;
	int *range = ft_range(min, max);
	int i = 0;
	int size = max - min;
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\nsize = %d", size);
	free(range);
	return (0);
}
*/
