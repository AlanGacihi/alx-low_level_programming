#ifndef DOG_H

#define DOG_H

/**

   * struct dog - a data structure for dogs

    * @name: character *input

     * @age: float input

      * @owner: character *input

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

void free_dog(dog_t *d);

dog_t *new_dog(char *name, float age, char *owner);

char *_strdup(char *str);

#endif /* DOG_H */
