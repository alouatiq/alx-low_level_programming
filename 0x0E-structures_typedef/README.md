# 0x0E. C - Structures, typedef

## Table of Contents
- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 0: Poppy](#task-0-poppy)
    - [Task 1: A dog is the only thing on earth that loves you more than you love yourself](#task-1-a-dog-is-the-only-thing-on-earth-that-loves-you-more-than-you-love-yourself)
      - [Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad](#task-2-a-dog-will-teach-you-unconditional-love-if-you-can-have-that-in-your-life-things-wont-be-too-bad)
        - [Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read](#task-3-outside-of-a-dog-a-book-is-a-mans-best-friend-inside-of-a-dog-its-too-dark-to-read)
	  - [Task 4: A door is what a dog is perpetually on the wrong side of](#task-4-a-door-is-what-a-dog-is-perpetually-on-the-wrong-side-of)
	    - [Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg](#task-5-how-many-legs-does-a-dog-have-if-you-call-his-tail-a-leg-four-saying-that-a-tail-is-a-leg-doesnt-make-it-a-leg)
	    - [License](#license)

## Description

This project focuses on understanding and using structures and typedefs in C. You will learn how to define and manipulate structures, how to use typedef to create new data types, and how to manage memory associated with these structures.

## Learning Objectives

By the end of this project, you should be able to explain:
- What structures are, when, why, and how to use them
- How to use typedef to create new data types

## Tasks

### Task 0: Poppy

Define a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

File: `dog.h`

### Task 1: A dog is the only thing on earth that loves you more than you love yourself

Write a function that initializes a variable of type `struct dog`.

Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

File: `1-init_dog.c`

### Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a struct dog.

Prototype: `void print_dog(struct dog *d);`

File: `2-print_dog.c`

### Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type `dog_t` as a new name for the type `struct dog`.

File: `dog.h`

### Task 4: A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog.

Prototype: `dog_t *new_dog(char *name, float age, char *owner);`

File: `4-new_dog.c`

### Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function that frees dogs.

Prototype: `void free_dog(dog_t *d);`

File: `5-free_dog.c`
