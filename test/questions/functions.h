/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 18:25:33 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/18 19:05:55 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

typedef struct	s_point
{
	int	x;
	int	y;
}	t_point;

#include <stdio.h>
#include <stdlib.h>

void			flood_fill(char **tab, t_point size, t_point begin);
int				ft_atoi(const char *str);
int				ft_atoi_base(const char *str, int str_base);
char			*ft_itoa(int nbr);
void			ft_list_foreach(t_list *begin_list, void (*f)(void *));
void 			ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
int				ft_list_size(t_list *begin_list);
void			ft_putstr(char *str);
int				*ft_range(int start, int end);
int				*ft_rrange(int start, int end);
char			**ft_split(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *s1, char *s2);
size_t			ft_strcspn(const char *s, const char *reject);
char			*ft_strdup(char *src);
int				ft_strlen(char *str);
char			*ft_strpbrk(const char *s1, const char *s2);
char			*ft_strrev(char *str);
size_t			ft_strspn(const char *s, const char *accept);
void			ft_swap(int *a, int *b);
unsigned int	lcm(unsigned int a, unsigned int b);
int				max(int *tab, unsigned int len);
void			print_bits(unsigned char octet);
unsigned char	reverse_bits(unsigned char octet);
void 			sort_int_tab(int *tab, unsigned int size);
t_list			*sort_list(t_list* lst, int (*cmp)(int, int));//WHY
unsigned char	swap_bits(unsigned char octet);

#endif
