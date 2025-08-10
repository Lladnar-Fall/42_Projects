/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:37:16 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/24 17:54:18 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len;

	if (!s1 || !s2)
		return (malloc(1));
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	new_str[0] = '\0';
	ft_strlcat(new_str, s1, len + 1);
	ft_strlcat(new_str, s2, len + 1);
	return (new_str);
}

// #include <stdio.h>
// int main()
// {
// 	char *str1 = "Hello, ";
// 	char *str2 = "World!";
// 	char *ans = ft_strjoin(NULL, NULL);
// 	printf("%s", ans);
// 	free(ans);
// }