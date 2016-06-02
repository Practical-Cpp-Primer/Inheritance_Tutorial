# Inheritance Tutorial/Basic Demo

This is a basic example of inheritance using Food as a base class, and a couple of 
different types of food as derived classes. 

Each of the derived versions of food needs to be prepared/cooked a different way, 
regardless they all need to be prepared, so they are a fitting candidate for inheritance.

## Note

The virtual method in Food is set = 0, and is never defined in the Food implementation
file. As a virtual method, this is both intentional and required.

All classes that inherit from Food then must include an implementation of that virtual
method. If they do not, they will be known as an abstract class, and it will be impossible
to create an instantiation of it.

Compilation instructions are the same as every other class repository:

# How to compile

```
cd build
cmake ..
```

And then

```
make
```

To run the program, cd into the bin folder, and run inheritance.

