Simple and also fake rendering api for testing function pointers.
Nothing special but it works.
- 11/10 Github.

/* ------------------------------------------------------------------------- */

render.h & render.c:
	Wrapper for sub apis.
	Interprets sub apis as working the same (not great).

opengl, directx, vulkan & software:
	Just prints to check if it is even working.

Compile:
	cc *.c -o out; ./out
	
	Takes all (.c) files and internal includes (.h) and compiles and links them into (out)
	it then stops compiling and runs the program (out).
	
