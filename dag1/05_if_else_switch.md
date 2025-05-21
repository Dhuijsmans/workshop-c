Conditionals are used for if statements (and loops, later).
if statements execute if its condition is not 0.
Note that this will happen for any value given as a condition, not just 1 and 0.
For example you can do something like

```c
void count(int money)
{
    if(money) {
        printf("Amount of money is not zero\n");
    }
}
```
