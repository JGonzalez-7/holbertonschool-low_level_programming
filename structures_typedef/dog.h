#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type representing a dog
 * @name: pointer to the dog's name
 * @age: float representing the dog's age
 * @owner: pointer to the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
