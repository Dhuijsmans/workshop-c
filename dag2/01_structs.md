Structs are used to create more complex datatypes.
For example a circle can be represented with the following struct:

```c
struct circle {
    double mx;
    double my;
    double radius;
}
```

Two floating point doubles to store the x and y coordinate of the middle point and a double to store the radius of the circle.

The individual members can be adressed using the . operator, so if you have `struct circle my_circle` its members can be adressed in such a manner: 

```c
    my_circle.mx = 0.4;
    my_circly.my = 0.33334;
    my_circle.radius = 4.3;
```
