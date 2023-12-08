/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:23:28 by seckhard          #+#    #+#             */
/*   Updated: 2023/12/07 23:51:58 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar2_fd(char c, int fd);
int		ft_putchar(char c);
int		ft_putstr(char const *s);
int		ft_putnbr(int n);
int		ft_putunsignednbr(unsigned int n);
int		ft_handle_ptr(unsigned long ptr, int c);
char	ft_puthexa(long int n, char c);
char	*ft_strchr(const char *str, int character);

#endif