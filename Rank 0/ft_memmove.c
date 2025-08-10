/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:41:24 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/24 10:23:10 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!d && !s)
		return (NULL);
	while (d > s && len > 0)
	{
		len--;
		d[len] = s[len];
	}
	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <libc.h>
// int main()
// {
//     char src1[] = "abcdef";
//     char src2[] = "abcdef";
//     printf("%s\n", ft_memmove(src1 + 2, src1, 4));
//     printf("%s", memmove(src2 + 2, src2, 4));
// }