#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines the attributes of a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: Defines the attributes of a dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/* Initializes a dog struct */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prints the attributes of a dog struct */
void print_dog(struct dog *d);

/* Creates a new dog struct and returns a pointer to it */
dog_t *new_dog(char *name, float age, char *owner);

/* Frees a dog struct */
void free_dog(dog_t *d);

/* Copies the string pointed to by src, including the terminating null byte, to the buffer pointed to by dest */
char *_strcpy(char *dest, char *src);

/* Returns the length of a string */
int _strlen(char *s);

#endif

