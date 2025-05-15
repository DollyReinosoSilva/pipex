Libft - Reescritura de la biblioteca estándar de C es un proyecto de 42. 
Rehice algunas de las funciones de la biblioteca C estándar, además de funciones adicionales útiles en proyectos futuros. 

Al realizar este proyecto, adquirí una comprensión profunda de las estructuras de datos y la depuración práctica. 

Funciones de <ctype.h>la biblioteca
ft_isalnum - prueba de caracteres alfanuméricos.
ft_isascii - prueba de caracteres ASCII.
ft_isalpha - Prueba de caracteres alfabéticos.
ft_islower - prueba de caracteres minúsculas.
ft_isupper - Prueba de caracteres en mayúsculas.
ft_isdigit - prueba de caracteres de dígitos decimales.
ft_isprint - Prueba de impresión de caracteres.
ft_tolower - conversión de letras mayúsculas a minúsculas.
ft_toupper - conversión de letras minúsculas a mayúsculas.

Funciones de <stdlib.h>la biblioteca
ft_atoi - convertir cadena ASCII en entero.
ft_calloc - asignación de memoria.

Funciones de <strings.h>la biblioteca
ft_bzero - escribe ceros en una cadena de bytes.
ft_memccpy - copia la cadena hasta encontrar el carácter.
ft_memchr - localizar byte en la cadena de bytes.
ft_memcmp - comparar cadena de bytes.
ft_memcpy - copiar área de memoria.
ft_memmove - copiar cadena de bytes.
ft_memset - escribe un byte en una cadena de bytes.

Funciones de <string.h>la biblioteca
ft_strlen - Encuentra la longitud de la cadena.
ft_strchr - localizar carácter en la cadena (primera aparición).
ft_strrchr - localizar carácter en la cadena (última aparición).
ft_strstr - localizar una subcadena en una cadena.
ft_strnstr - localizar una subcadena en una cadena (limitada por tamaño).
ft_strcmp - comparar cadenas.
ft_strncmp - comparar cadenas (limitadas por tamaño).
ft_strlcpy - copia de cadenas con tamaño limitado.
ft_strlcat - concatenación de cadenas con tamaño limitado.

Funciones no estándar
ft_putchar_fd - genera un carácter en un archivo determinado.
ft_putstr_fd - cadena de salida al archivo dado.
ft_putendl_fd - cadena de salida al archivo dado con nueva línea.
ft_putnbr_fd - salida de número entero al archivo dado.
ft_itoa - convierte un entero en una cadena ASCII.
ft_substr - extraer subcadena de la cadena.
ft_strtrim - recorta el principio y el final de la cadena con los caracteres especificados.
ft_strjoin - concatenar dos cadenas en una nueva cadena (con malloc).
ft_split - divide una cadena, con el carácter especificado como delimitador, en una matriz de cadenas.
ft_strmapi - crea una nueva cadena a partir de la modificación de la cadena con la función especificada.

Funciones de lista enlazada
ft_lstnew - crear nueva lista.
ft_lstsize - contar elementos de una lista.
ft_lstlast - encuentra el último elemento de la lista.
ft_lstadd_back - añadir nuevo elemento al final de la lista.
ft_lstadd_front - añadir nuevo elemento al principio de la lista.
ft_lstdelone - eliminar elemento de la lista.
ft_lstclear - eliminar secuencia de elementos de una lista desde un punto de inicio.
ft_lstiter - aplicar función al contenido de todos los elementos de la lista.
ft_lstmap - aplicar función al contenido de todos los elementos de la lista en la nueva lista.
