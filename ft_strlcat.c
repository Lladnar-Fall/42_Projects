/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:25:37 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/16 10:53:04 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
		j++;
	while (i < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (j);
}

// #include <string.h>
#include <stdio.h>

int main()
{
	char word1[] = "please";
	char word2[] = " connect";

	printf("%lu\n", strlcat(word1, word2, sizeof(word1)));
	printf("%s", word1);
}