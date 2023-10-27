/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:15:52 by gdelvign          #+#    #+#             */
/*   Updated: 2023/10/20 13:13:29 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_substr_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static size_t	ft_count_substrs(char const *str, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			counter++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (counter);
}

static void	*free_substrs(char **substrs)
{
	int	i;

	i = 0;
	while (substrs[i])
		free(substrs[i++]);
	free(substrs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**substrs;
	size_t	nb_substr;
	size_t	i;

	if (!s)
		return (NULL);
	nb_substr = ft_count_substrs(s, c);
	substrs = (char **)malloc((nb_substr + 1) * sizeof(char *));
	if (!substrs)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			substrs[i] = ft_substr(s, 0, ft_get_substr_len(s, c));
			if (!substrs[i++])
				return (free_substrs(substrs));
			s += ft_get_substr_len(s, c);
		}
		else
			s++;
	}
	substrs[nb_substr] = NULL;
	return (substrs);
}
