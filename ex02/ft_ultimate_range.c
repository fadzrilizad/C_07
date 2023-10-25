/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:01:59 by fizad             #+#    #+#             */
/*   Updated: 2023/08/23 21:44:32 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ult;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
		return (0);
	ult = (int *)malloc(sizeof(int) * size);
	if (ult == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ult[i] = min + i;
		i++;
	}
	return (ult);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}

/*
#include <stdio.h>

int main(void)
{
	int *range;
	int i = 0;
	int size = ft_ultimate_range(&range, 10, 100);
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\nrange = %d\n", size);
	return (0);
}	
*/
