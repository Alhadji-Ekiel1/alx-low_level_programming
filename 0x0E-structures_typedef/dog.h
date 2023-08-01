#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: Pointer that represent name of dog
 * @age: float represents age of daog
 * @owner: pointer that represent owner of dog
 *
 * Description: Longer description
 */
struct dog {
    char* name;
    float age;
    char* owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
