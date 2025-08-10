/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:52:13 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/16 17:17:45 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;
	int		i;

	d = (char)c;
	i = 0;
	while (1)
	{
		if (s[i] == d)
			return ((char *)s + i);
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *word = "hello";
// 	char *ans = ft_strchr(word, 101);
// 	printf("%c", *ans);
// }