/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:37:47 by olabrecq          #+#    #+#             */
/*   Updated: 2022/04/11 15:45:31 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H
	
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdint.h>
# include <string.h>
# include <sys/time.h>
# include <pthread.h>

struct s_info;

typedef struct			s_info
{
	pthread_mutex_t 	is_dead;
	pthread_mutex_t		writing_status;
	pthread_mutex_t		meal_check;
	// t_philo				*philos;
	int					nb_philo;
	int					tt_die;
	int					tt_eat;
	int					tt_sleep;
	int					num_must_eat;
	int					all_ate;
	long long							start_time;
	int 				stop;
} t_info;

typedef	struct			s_philo
{
	pthread_mutex_t		*l_fork;
	pthread_mutex_t		*r_fork;
	pthread_t			philo_th;
	pthread_t 			checker;
	struct s_info		*infos;
	long long							time_last_meal;
	int					id;
	int					x_ate;
	int 				stop;
}						t_philo;

#endif