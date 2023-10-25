#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - Struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: None
*/
typedef struct dog
{
	char *name, *owner;
	float age;
}


dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
