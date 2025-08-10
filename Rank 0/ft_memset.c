/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:56:15 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/23 14:16:00 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	char str[50] = "This is to test if it works or not.";
// 	char *s = ft_memset(str +  5, '8', 8*sizeof(char));
// 	printf("%s\n", s);
// }