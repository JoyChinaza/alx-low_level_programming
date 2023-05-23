#ifndef DOG_H
#define DOg_H

/**
 * struct dog - a dog's basic info
 * @name: Dog name
 * @age: Dog age
 * @ownener: Dog owner
 *
 * Description: Longer description
 */
int main(void)
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

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
