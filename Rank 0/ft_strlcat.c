/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:25:37 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/18 16:55:10 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	if (size <= d_len)
		return (size + s_len);
	else if (size > d_len)
	{
		while (src[i] != '\0' && (d_len + i + 1) < size)
		{
			dst[d_len + i] = src[i];
			i++;
		}
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char buffer[10] = "abc";
// 	size_t result = ft_strlcat(buffer, "defghi", sizeof(buffer));
// 	printf("Result: %zu\n", result);
// 	printf("Buffer: '%s'\n", buffer);
// }