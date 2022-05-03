i#include "dog.h"

#include <stdio.h>

#include <stdlib.h>

#ifndef NULLDOGSTRUCTURE

#define NULLDOGSTRUCTURE

/**

   * print_dog - a function that prints a struct dog

    * @d: Pointer to a data structure

     */

void print_dog(struct dog *d)

{

		if (d == NULL)

					return;

			if ((*d).name != NULL)

						printf("Name: %s\n", (*d).name);

				else

							printf("Name: (nil)\n");

					printf("Age: %f\n", (*d).age);

						if ((*d).owner != NULL)

									printf("Owner: %s\n", (*d).owner);

							else

										printf("Owner: (nil)\n");

}

#endif
