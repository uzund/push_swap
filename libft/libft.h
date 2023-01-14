/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:51:37 by duzun             #+#    #+#             */
/*   Updated: 2023/01/13 22:57:11 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isin(char c);
char	*ft_strdup(const char *s1);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strndup(const char *s, size_t len);
int		ft_count_words(char *s);
int		ft_isdigit(int c);
int		ft_isspace(char *s);
double	ft_atof(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	**ft_split(char *s);
int		ft_atoi(const char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
