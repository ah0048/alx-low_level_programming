#ifndef pragma
#define pragma
/**
 * struct dog - Short doggo
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: doggo
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif