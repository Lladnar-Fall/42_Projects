/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:22:16 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/23 11:57:45 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char const *s, char c);
int		words_len(char const *s, char c);
char	**split_words(char **str, char const *s, char c);
void	free_it(char **s, int i);

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	if (!split_words(str, s, c))
		return (NULL);
	return (str);
}

char	**split_words(char **str, char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = words_len(s, c);
		if (len > 0)
		{
			str[i] = (char *)malloc(len + 1);
			if (!str[i])
			{
				free_it(str, i);
				return (NULL);
			}
			ft_strlcpy(str[i], s, len + 1);
			str[i][len] = '\0';
			i++;
			s += len;
		}
	}
	str[i] = NULL;
	return (str);
}

void	free_it(char **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && !counter)
		{
			counter = 1;
			i++;
		}
		else if (*s == c)
		{
			counter = 0;
		}
		s++;
	}
	return (i);
}

int	words_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char *word = " hello world  and ";
// 	char sep = ' ';
// 	char **ans = ft_split(word, sep);
// 	int i = 0;
// 	while (ans[i])
// 	{
// 		printf("%s\n", ans[i]);
// 		i++;
// 	}
// 	free_it(ans, i);
// }

// int	count_words(char const *s, char c)
// {
// 	int	counter;

// 	counter = 0;
// 	while (*s)
// 	{
// 		if (*s != c)
// 		{
// 			counter++;
// 			while (*s && *s != c )
// 				s++;
// 			if (*s == '\0')
// 				return (counter);
// 		}
// 		else
// 		{
// 			while(*s && *s == c )
// 				s++;
// 			if (*s == '\0')
// 				return (counter);
// 		}
// 	}
// 	return (counter);
// }