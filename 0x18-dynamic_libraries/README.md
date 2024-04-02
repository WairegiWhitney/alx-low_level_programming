Dynamic libraries
1.
gcc -c -fPIC -o putchar.o putchar.c
gcc -c -fPIC -o islower.o islower.c
gcc -c -fPIC -o isalpha.o isalpha.c
gcc -c -fPIC -o abs.o abs.c
gcc -c -fPIC -o isupper.o isupper.c
gcc -c -fPIC -o isdigit.o isdigit.c
gcc -c -fPIC -o strlen.o strlen.c
gcc -c -fPIC -o puts.o puts.c
gcc -c -fPIC -o strcpy.o strcpy.c
gcc -c -fPIC -o atoi.o atoi.c
gcc -c -fPIC -o strcat.o strcat.c
gcc -c -fPIC -o strncat.o strncat.c
gcc -c -fPIC -o strncpy.o strncpy.c
gcc -c -fPIC -o strcmp.o strcmp.c
gcc -c -fPIC -o memset.o memset.c
gcc -c -fPIC -o memcpy.o memcpy.c
gcc -c -fPIC -o strchr.o strchr.c
gcc -c -fPIC -o strspn.o strspn.c
gcc -c -fPIC -o strpbrk.o strpbrk.c
gcc -c -fPIC -o strstr.o strstr.c


gcc -shared -o libdynamic.so putchar.o islower.o isalpha.o abs.o isupper.o \
isdigit.o strlen.o puts.o strcpy.o atoi.o strcat.o strncat.o strncpy.o \
strcmp.o memset.o memcpy.o strchr.o strspn.o strpbrk.o strstr.o

