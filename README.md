# Night

An interpreted programming language. It combines the simplicity of Python, with the type concepts of the C family.

It's still in early development, and I have a lot left to do. I'm also working on a [website](https://night-web.dynamicsquid.repl.co/) which you can definitly check out!

Currently, the website is the recommended place to code using Night, however support for a source build will be coming soon.

---

**Night Overview**

Here's a sample of my current language:

```
print("Hello World!\n");

// this is a comment

bit boolean = true; // supports '! || && == != < > <= >= ( )' all of those
syb character = 'c'; // doesn't support any expressions yet
int integer = 10; // supports '+ - * / % ( )' all of those
dec float = 3.14; // same with 'int', but without 'mod'
str string = "squid"; // suports string concatenation with 'syb', 'int', 'dec', and 'str'

int answer = 10 + 5;
answer += 2 + 3;

int legs = 10;
bit smart = true;

if (legs == 10 && smart)
{
    print("Hi squid\n");
}
else if (legs == 8 && smart)
{
    print("Hi octopus\n");
}
else if (legs == 2 && !smart)
{
    print("Hi human\n");
}
else
{
    print("Not sure who you are\n");
}

int add(int a, int b)
{
    print("Adding to numbers:\n");
    return a + b;
}

int number = add(2, 3) + 4;
print(number + "\n");

loop (5)
{
    print("squid");
}
```

Note that for the beta versions, the language is buggy and might not work sometimes.

---

**Progress Updates**

I just got done with `v2.2-beta`, which is a release about loops. Now, I'm working on `v2.3-beta`, which are arrays!

Here's a list of all the future relases I have planned:

- `v2.3-beta` arrays
- `v2.4-beta` user input
- `v3.0` baseline for `v3`
  - everything in `v2`
  - function def and overload
    - also support for recursion (maybe)
  - while and for loops
    - non-static conditions
  - cleaner code :)
- `v3.1` support for source build
  - with the help of [AntimatterReactor](https://github.com/AntimatterReactor)
- `v3.2` classes
