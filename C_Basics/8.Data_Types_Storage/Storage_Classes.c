/*
Storage Classes

1. Automatic(auto)
2. Static (static)
3. Register(register) it is present inside the processor
4. External(extern)

1. Lifetime Management: Storage classes determine the lifetime (scope and duration) of variables.

2. Scope Control: Dictate where a variable can be accessed, either within a function/block or throughout the program.

3. Memory Location: Influence where the variable is stored, such as in the stack, heap, or data segment.

4. Initialization: Define default initial values, like zero for static variables.
*/

/*
1. auto
• Default for local variables within functions.
• Use when you need a variable that is only accessible within its
  block scope and its lifetime is limited to that block.
2. register
• For variables that are heavily used, such as loop counters, where you want to
  hint the compiler to optimize for speed.
• Keep in mind the compiler might ignore the hint.
3. static
• For local variables within functions that you want to retain their value between
  calls to that function.
• At file scope, to limit the visibility of a global variable to the file it's declared in,
  enhancing encapsulation.
4. extern
• When you need to access a variable defined in another file or to declare a global
  variable across multiple files.
• Use for shared data while keeping the definition in one place to avoid multiple
  definition errors.
*/


