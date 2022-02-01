# push_swap
42 project push_swap
This project comprises an interesting case study regarding sorting algorithms and its performances, being part of the core curriculum of all 42 schools worldwide. The task is simple: given a sequence of random numbers disposed in a stack data structure (stack A), sort them with the help of an empty auxiliary stack (stack B) and a set of specific stack operations. The operations allowed are described as follows, as written in our task:

- **```sa```** : swap a - Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements).
- **```sb```** : swap b - Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements).
- **```ss```** : sa and sb at the same time.
- **```pa```** : push a - take the first element at the top of b and put it at the top of a. Do nothing if B is empty.
- **```pb```** : push b - take the first element at the top of a and put it at the top of b. Do nothing if A is empty.
- **```ra```** : rotate a - shift up all elements of stack A by 1. The first element becomes the last one.
- **```rb```** : rotate b - shift up all elements of stack B by 1. The first element becomes the last one.
- **```rr```** : ra and rb at the same time.
- **```rra```** : reverse rotate a - shift down all elements of stack A by 1. The last element becomes the first one.
- **```rrb```** : reverse rotate b - shift down all elements of stack B by 1. The last element becomes the first one.
- **```rrr```** : rra and rrb at the same time.


##### ⇩`my algorithm`⇩
<img width="510" alt="Screen Shot 2022-01-29 at 18 27 26" src="https://user-images.githubusercontent.com/73405731/151953980-a64aa6bb-d006-4d61-8789-273de5cd921f.png">
