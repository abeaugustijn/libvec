/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvec.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <aaugusti@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 11:39:43 by aaugusti          #+#    #+#             */
/*   Updated: 2020/03/20 12:00:33 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVEC_H
# define LIBVEC_H

# include <stdbool.h>

# ifndef EPSILON
#  define EPSILON (0.000001)
# endif

typedef struct	s_vec3f {
	double x;
	double y;
	double z;
}				t_vec3f;

t_vec3f			vec_add(t_vec3f a, t_vec3f b);
double			vec_angle(t_vec3f a, t_vec3f b);
bool			vec_compare(t_vec3f a, t_vec3f b);
t_vec3f			vec_crossp(t_vec3f a, t_vec3f b);
double			vec_dist(t_vec3f a, t_vec3f b);
double			vec_dotp(t_vec3f a, t_vec3f b);
bool			vec_float_compare(double a, double b);
t_vec3f			vec_from_to(t_vec3f from, t_vec3f to);
bool			vec_is_normal(t_vec3f vec);
double			vec_len(t_vec3f vec);
t_vec3f			vec_multiply(t_vec3f vec, double factor);
t_vec3f			vec_new(double x, double y, double z);
t_vec3f			vec_normalize(t_vec3f vec);
t_vec3f			vec_rot_x(t_vec3f vec, double rad);
t_vec3f			vec_rot_y(t_vec3f vec, double rad);
t_vec3f			vec_rot_z(t_vec3f vec, double rad);
t_vec3f			vec_sub(t_vec3f a, t_vec3f b);

#endif
