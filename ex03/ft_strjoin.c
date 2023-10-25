/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:41:04 by fizad             #+#    #+#             */
/*   Updated: 2023/08/23 13:18:14 by fizad            ###   ########.fr       */
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

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
}

int	full_length(int size, char **str, char *sep)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (i < size)
	{
		r += ft_strlen(str[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		r += ft_strlen(sep);
		i++;
	}
	return (r);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*full_arr;
	char	*result;
	int		full_size;
	int		i;

	full_size = full_length(size, strs, sep);
	full_arr = (char *)malloc(sizeof(char) * (full_size + 1));
	if (!full_arr)
		return (NULL);
	result = full_arr;
	i = 0;
	while (i < size)
	{
		ft_strcpy(full_arr, strs[i]);
		full_arr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(full_arr, sep);
			full_arr += ft_strlen(sep);
		}
		i++;
	}
	*full_arr = '\0';
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
	char **strs;
	char *str1 = "mohamad";
	char *str2 = "fadzril";
	char *str3 = "izad";
	char *sep = " ";
	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = (char *)malloc(sizeof(char) * (ft_strlen(str1) + 1));
	strs[1] = (char *)malloc(sizeof(char) * (ft_strlen(str2) + 1));
	strs[2] = (char *)malloc(sizeof(char) * (ft_strlen(str3) + 1));
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	char *joined = ft_strjoin(3, strs, sep);
	printf("%s\n", joined);
	free(joined);
//	printf("%d", full_length(3, strs, sep));
	return (0);
}
*/
