/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:04:10 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/04 17:56:24 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '	')
		return (1);
	return (0);
}

char	*cpy_str(char *src, int start, int end)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char *) * ((end - start) + 1));
	i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = 0;
	return (dest);
}

int	count_words(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_isspace(str[i]))
		{
			i++;
		}
		if (str[i])
		{
			count++;
		}
		while (str[i] && !ft_isspace(str[i]))
			i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**strs;
	int		begin;
	int		end;
	int		current;
	int		count;

	count = count_words(str);
	if (!count)
		return (NULL);
	strs = malloc(sizeof(*strs) * count + 1);
	begin = 0;
	current = 0;
	while (str[begin])
	{
		while (str[begin] && ft_isspace(str[begin]))
			begin++;
		end = begin;
		while (str[end] && !ft_isspace(str[end]))
			end++;
		if (str[end])
		{
			strs[current] = cpy_str(str, begin, end);
			current++;
		}
		begin = end;
	}
	strs[current] = NULL;
	return (strs);
}

int	main(void)
{
	char	**strs;

	strs = ft_split(" h e l l o w o r l d ");
	if (!strs)
		return (0);
	while (*strs)
	{
		printf("[%s]\n", *strs);
		strs++;
	}
	return (0);
}
