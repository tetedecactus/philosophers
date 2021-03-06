/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 09:59:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/04/21 10:49:10 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include "struct.h"
# include "def.h"

// Init function
t_philo		*init_philo(t_info *info);
int			init_info(t_info *info, int ac, char **av);

// Utils function
long long	current_time(t_philo *philo);
long long	time_ms(void);
int			ft_atoi(const char *str);
int			ft_isdigit(int c);
void		ft_usleep(long long time_in_ms);
void		*ft_calloc(size_t count, size_t size);

// Routine function 
void		check_hand(t_philo *philo);

// Status function
void		print_status(t_philo *philo, char *status, int dead);
void		display_info(void);
void		*is_dead(void *data);
int			ft_strcmp(const char *s1, const char *s2);

// Thread functions
void		*poutine(void *data);
void		routine_poutine(t_philo *philo);
void		*is_dead(void *data);

#endif
