// Tables-view.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>

#define HASHSIZE 101
static struct nlist *hashtab[HASHSIZE];	// Table of pointers


// Hashing function 
// hash: gets hash-code for string s
unsigned hash(char *s)
{
	unsigned hashval;
	for (hashval = 0; *s != '\0'; s++)
		hashval = *s + 31 * hashval;
	return hashval % HASHSIZE;
}

struct nlist {				// Table element
	struct nlist *next;		// Next element pointer
	char *name;				// Data-name
	char *defn;				// Substitutive text
};				

// lookup: can find the following s string in the list 
struct nlist *lookup(char *s)
{
	struct nlist *np;

	for (np = hashtab[hash(s)]; np != NULL; np = np->next)
		if(strcmp(s,np->name) == 0)
			return np; // Find it
	return NULL;       // Don't find
}


struct nlist *lookup(char *s);
char *strdup(char*);

// install: can add new name/text in the table
struct nlist *install(char*name, char *defn)
{
	struct nlist *np;
	unsigned hashval;
	
	if ((np = lookup(name)) == NULL) {	// Can't find it
		np = (struct nlist*) malloc(sizeof(*np));
		if (np == NULL || (np->name = strdup(name)) == NULL)
			return NULL;
		hashval = hash(name);
		np->next = hashtab[hashval];
		hashtab[hashval] = np;
	} else							// Already in the list
		free((void*) np->defn);		// Set free the last defn
	if ((np->defn = strdup(defn)) == NULL)
		return NULL;
	return np;	
}


// Exercise #6.5: type the function undef which can delete name and descruption 
//	from the table. This function consist the other functions like 'lookup'
// and 'install'
void undef(char* name, char * defn)
{
	// Find element with this name/desription in the table
	nlist *elem = lookup(name);
	// Now delete this element from the table:
}

int main()
{

    return 0;
}

