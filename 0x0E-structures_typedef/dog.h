#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
  char *name;
  float age;
  char *owner;
};

typedef struct dog dog_t;

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees dogs
 * @d: pointer to dog_t to free
 */
void free_dog(dog_t *d);

#endif /* DOG_H */
