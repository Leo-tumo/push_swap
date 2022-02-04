/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 21:29:04 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 15:48:53 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*source;
	size_t			i;

	source = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return ((size_t) NULL);
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0')
	{
		if (i < dstsize - 1)
		{
			*dst = *source;
			++dst;
			++source;
		}
		++i;
	}
	*dst = '\0';
	return (i);
}

size_t	length(char const *s, char c)
{
	size_t	len;
	size_t	amount;

	amount = 0;
	while (*s)
	{
		len = 0;
		while (*s != c && *s)
		{
			++len;
			++s;
		}
		if (len != 0)
		{
			++amount;
			--s;
		}
		++s;
	}
	return (amount);
}

static void	ft_next_size(char const **s, size_t *next, char c)
{
	size_t	index;

	*s += *next;
	*next = 0;
	index = 0;
	while (**s && **s == c)
		++(*s);
	while ((*s)[index])
	{
		if ((*s)[index] == c)
			return ;
		++(*next);
		++index;
	}
}

static char	**ft_memory_error(char **s)
{
	size_t	index;

	index = 0;
	while (s[index])
	{
		free(s[index]);
		++index;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	len;
	size_t	sp_len;
	size_t	sp_index;

	if (!s)
		return (NULL);
	sp_len = length(s, c);
	res = (char **)malloc(sizeof(char *) * (sp_len + 1));
	if (!res)
		return (NULL);
	len = 0;
	sp_index = 0;
	while (sp_index < sp_len)
	{
		ft_next_size(&s, &len, c);
		res[sp_index] = malloc(sizeof(char) * (len + 1));
		if (!res)
			return (ft_memory_error(res));
		ft_strlcpy(res[sp_index], s, len + 1);
		++sp_index;
	}
	res[sp_index] = NULL;
	return (res);
}
