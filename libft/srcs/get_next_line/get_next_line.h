/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:54:26 by krocha            #+#    #+#             */
/*   Updated: 2024/04/15 11:14:23 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* LIBRARIES */

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/* BUFFER SIZE */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/****** PROTOTYPES ******/

/* GET_NEXT_LINE */
char	*get_next_line(int fd);

/* GET_NEXT_LINE_UTILS */
char	*read_file(char *str, int fd);
char	*ft_get_line(char *str);
char	*ft_next_line(char *str);
#endif
