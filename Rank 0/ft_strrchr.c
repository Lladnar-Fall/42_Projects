/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:01:44 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/18 11:44:26 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	d;
	int		i;

	d = (char)c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == d)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
