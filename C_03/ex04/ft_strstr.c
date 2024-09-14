/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 22:25:30 by isallali          #+#    #+#             */
/*   Updated: 2024/09/07 16:32:51 by isallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (to_find[k] == '\0')
		return (str);
	while (str[i])
	{
		k = 0;
		while (to_find[k] == str[i + k])
		{
			k++;
			while (to_find[k] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
