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
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
