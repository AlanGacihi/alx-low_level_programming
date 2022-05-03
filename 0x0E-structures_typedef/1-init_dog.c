#include "dog.h"

#include <stdio.h>

#include <stdlib.h>

#ifndef DOGSTRUCTURE

#define DOGSTRUCTURE

/**

   * init_dog - a function that initialize a variable of type struct dog

    * @d: pointer to a struct

     * @name: a string of dogs name's

      * @owner: a character name of the dog's owner

       * @age: a float representing the dog's age

        */

void init_dog(struct dog *d, char *name, float age, char *owner)

{

		if (d == NULL)

					return;

			(*d).name = name;

				(*d).age = age;

					(*d).owner = owner;

}

#endif /* DOGSTRUCTURE */
