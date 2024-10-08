/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:00:54 by jose-ara          #+#    #+#             */
/*   Updated: 2024/10/08 19:49:42 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/**
 * All includes we need for other functions
 */
# include <limits.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * @brief Structure used for bonus part
 * -> 1º field is for content
 * -> 2º field for linking next list
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief Returns if c is an alphanumeric character or not
 *
 * @param c The ascii value of the character
 * @return If it is an alphanumeric character or not
 */
int					ft_isalnum(int c);

/**
 * @brief Returns if c is an alphabethic character or not
 *
 * @param c The ascii value of the character
 * @return If it is an alphabethic character or not
 */
int					ft_isalpha(int c);

/**
 * @brief Returns if c is an ascii character or not
 *
 * @param c The ascii value of the character
 * @return If it is an ascii character or not
 */
int					ft_isascii(int c);

/**
 * @brief Returns if c is a numeric digit character or not
 *
 * @param c The ascii value of the character
 * @return If it is a numeric digit character or not
 */
int					ft_isdigit(int c);

/**
 * @brief Returns if c is an printable character or not
 *
 * @param c The ascii value of the character
 * @return If it is an printable character or not
 */
int					ft_isprint(int c);

/**
 * @brief If the parameter passed is an upper case it changes it to lower case
 *
 * @param c The ascii value of the character
 * @return The new value if it changed or the default one
 */
int					ft_tolower(int c);

/**
 * @brief If the parameter passed is an lower case it changes it to upper case
 *
 * @param c The ascii value of the character
 * @return The new value if it changed or the default one
 */
int					ft_toupper(int c);

/**
 * @brief Transformrs the ascii recived to integer
 *
 * @param nptr Pointer to the string where the number is
 * @return The integer value
 */
int					ft_atoi(const char *nptr);

/**
 * @brief Compers s1 and s2 and returns the difference
 *
 * @param s1 First void pointer
 * @param s2 Second void pointer
 * @param n Number of bytes to check
 * @return 1 is (s1 > s2); -1 if (s1 < s2); 0 if (s1 == s2)
 */
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Compers s1 and s2 and returns the difference
 *
 * @param s1 First const char pointer
 * @param s2 Second const char pointer
 * @param n Number of bytes to check
 * @return 1 is (s1 > s2); -1 if (s1 < s2); 0 if (s1 == s2)
 */
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Set first n-positions to 0
 *
 * @param s Void pointer
 * @param n Number of bytes to check
 * @return Void
 */
void				ft_bzero(void *s, size_t n);

/**
 * @brief Iterates the pointer s and applies function f on each element
 *
 * @param s Char pointer
 * @param f Variable func which has as parameters and unsigned int and
 * 			a pointer to char
 * @return Void
 */
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief Write c into the fd passed through parameters
 *
 * @param c Char to write
 * @param fd File descriptor
 * @return Void
 */
void				ft_putchar_fd(char c, int fd);

/**
 * @brief Write string s into the fd passed through parameters
 *
 * @param s String to write
 * @param fd File descriptor
 * @return Void
 */
void				ft_putstr_fd(char *s, int fd);

/**
 * @brief Write string s into the fd passed through parameters,
 * and ands a new line
 *
 * @param s String to write
 * @param fd File descriptor
 * @return Void
 */
void				ft_putendl_fd(char *s, int fd);

/**
 * @brief Write integer n into the fd passed trhough parameters
 *
 * @param n Integer to write
 * @param fd File descriptor
 * @return Void
 */
void				ft_putnbr_fd(int n, int fd);

/**
 * @brief Allocates nmeb * size bytes of memory and set them all to 0
 *
 * @param nmeb Number of memory blocks
 * @param size Size fo each block (in bytes)
 * @return Pointer to the memory allocated or null
 */
void				*ft_calloc(size_t nmeb, size_t size);

/**
 * @brief Looks for c in the first n-possitions of s
 *
 * @param s Const void pointer
 * @param c Char to find
 * @param n Number of bytes to look
 * @return Pointer to c location or null
 */
void				*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Writes the first n-posstions of src into dst
 *
 * @param dst Pointer of destination
 * @param src Pointer of source
 * @param n The number of bytes to read
 * @return Pointer to dst or null
 */
void				*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Same as ft_memcpy but this one takes place when
 * memory position overlaps
 *
 * @param dst Pointer of destination
 * @param src Pointer of source
 * @param n The number of bytes to read
 * @return Pointer to dst or null
 */
void				*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Set the first n-posstions of s equal to c
 *
 * @param s Pointer of memory
 * @param c Value to copy
 * @param n The number of bytes to read
 * @return Pointer to s or null
 */
void				*ft_memset(void *s, int c, size_t n);

/**
 * @brief Looks for the first position of c in s
 *
 * @param s String were we will look
 * @param c Value to find
 * @return Pointer to positon of scor null
 */
char				*ft_strchr(const char *s, int c);

/**
 * @brief Take s and makes a call to malloc to reserve memory
 *
 * @param s Pointer of the string
 * @return Pointer to the memory reserved or null
 */
char				*ft_strdup(const char *s);

/**
 * @brief Tries to find little inside of big
 *
 * @param big String were we will look
 * @param little String to find
 * @param len Length
 * @return Pointer to positon of little or null
 */
char				*ft_strnstr(const char *big, const char *little,
						size_t len);

/**
 * @brief Looks for the last position of c in s
 *
 * @param s String were we will look
 * @param c Value to find
 * @return Pointer to positon of c or null
 */
char				*ft_strrchr(const char *s, int c);

/**
 * @brief Tries to take a substr from s
 *
 * @param s String we will make a substr from
 * @param start Postion of the first character
 * @param len Length of the substr
 * @return Pointer to positon of substr or null
 */
char				*ft_substr(const char *s, unsigned int start, size_t len);

/**
 * @brief Concatenates s2 behind s1
 *
 * @param s1 String were we will look
 * @param s2 Value to find
 * @return Pointer to positon of s1 or null
 */
char				*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Tries to delete, from front and back parts,
	the characters included in set
 *
 * @param s1 String from we will take chars
 * @param set Values to delete
 * @return Pointer to positon of the new string or null
 */
char				*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Takes an unsigned integer and casts it to ascii
 *
 * @param n Number to cast to ascii
 * @return Pointer to positon of the new string or null
 */
char				*ft_itoa(int n);

/**
 * @brief Takes an unsigned integer and casts it to ascii
 *
 * @param n Number to cast to ascii
 * @return Pointer to positon of the new string or null
 */
char				*ft_uitoa(unsigned int n);

/**
 * @brief Creates a new string from apliying f to all s characters
 *
 * @param s String from were we will create new string
 * @param f Function to apply to characters
 * @return Pointer to positon of the new word or null
 */
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Splits the string s in x-words eliminating the c char
 *
 * @param s String to split
 * @param c Value to delete
 * @return Pointer to positon of the first word or null
 */
char				**ft_split(char const *s, char c);

/**
 * @brief Concatenates dst and src in the buffer of length size
 *
 * @param dst First string
 * @param src Second string
 * @param size Total lentgh of buffer
 * @return Size of the string that tried to/has create
 */
size_t				ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief Copies the first n-bytes of src into dst
 *
 * @param dst Where will be copied src
 * @param src Source of teh string
 * @param size Number of bytes to copy
 * @return Size of the new word created
 */
size_t				ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief Gives you the length of s
 *
 * @param s String we will measure
 * @return Size of s
 */
size_t				ft_strlen(const char *s);

/**
 * <------------------------------BONUS PART----------------------------->
 */

/**
 * @brief Gives you the length of the list
 *
 * @param lst List we will measure
 * @return Size of the list
 */
int					ft_lstsize(t_list *lst);

/**
 * @brief Gives you the postion of the last node
 *
 * @param lst List we will look into
 * @return The last node or null
 */
t_list				*ft_lstlast(t_list *lst);

/**
 * @brief Iterates and creates a new list feom lst applying f to all content,
 * del use in case of need to delete
 *
 * @param lst List we will look into
 * @param f Function to aply to list content
 * @param del Funtion to use in case of necesity of delete
 * @return The memory position of new list or null
 */
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/**
 * @brief Creates a new list
 *
 * @param content Content for the new node
 * @return Memory position if the new node or null
 */
t_list				*ft_lstnew(void *content);

/**
 * @brief Add new to the back part of lst
 *
 * @param lst List we will look into
 * @param new Node we have to add
 * @return Void
 */
void				ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Add new to the front part of lst
 *
 * @param lst List we will look into
 * @param new Node we have to add
 * @return Void
 */
void				ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Deletes and frees all the list
 *
 * @param lst List we will delete
 * @param del Function to delete the nodes
 * @return Void
 */
void				ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Deletes and frees one node
 *
 * @param lst Node to delete
 * @param del Function to delete the node
 * @return Void
 */
void				ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Iterates the list and applies f to all content of list
 *
 * @param lst List we will iterate
 * @param f Function to apply to content
 * @return Void
 */
void				ft_lstiter(t_list *lst, void (*f)(void *));

#endif
