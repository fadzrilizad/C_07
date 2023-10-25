/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:19:02 by fizad             #+#    #+#             */
/*   Updated: 2023/08/23 11:05:18 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*cpy;

	i = ft_strlen(src);
	j = 0;
	cpy = (char *)malloc(sizeof(char) * i + 1);
	if (!cpy)
		return (NULL);
	while (src[j])
	{
		cpy[j] = src[j];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}

/*
#include <stdio.h>

int main(void)
{
	char *src = "Hello World";
	char *dest;

	dest = ft_strdup(src);
	printf("%s\n", dest);
	return (0);
}	
*/
