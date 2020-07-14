# Simple Shell

The Simple Shell is a Holberton School project that will test the skills in C coding for the students in the first trimester of the school. This is a command interpreter that will allow you to type some commands and performa actions from them.

## Table of Contents

 - Authors
 - Installation
 - Use
 - Commands
 - Examples of use

## Installation

In order to use the shell it is necessary to install the shell first by using the following commands from your terminal:

    git clone https://github.com/thecamo1509/simple_shell.git
This will create a new directory, now move to the directory using:

    cd simple-shell/
Now you will be inside the shell directory and you will see different files. These files are used to compile the shell. In order to compile it please use:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
That's it now you have your shell installed on your system
![N|Solid](https://i.ibb.co/tbCxNYr/Captura.png)
## Use

Now let's execute our shell in order to execute the shell just type from your terminal the command

    ./hsh
This will open a shell and it will look like this

    #cisfun$ 
Now you are on the shell and it is waiting for you to type a command. Next we will see a list of commands. Now we will show you how you can exit the shell. You can use either one of these commands:

    #cisfun$ exit
Or you can also do `Ctrl + D` And this will also terminate the simple shell.

## Some Commands

Here we share with you a list of some commands you can use, there are many more, try to experiment with it.

 - `/bin/ls`
 - `ls`
 - `pwd`
 - `echo`
 - `vim`
 - `touch`
 - `mkdir`
 - `rm`
 - `ifconfig`
 - `mv`
 - `cp`
 
And many more...

## Examples of use

Let's take a look at these examples:

```
#cisfun$ ls -l
#cisfun$ echo Hello World
#cisfun$ pwd
#cisfun$ /bin/ls
```

These commands will execute the following:

     -rw-r--r-- 1 root root   170 Nov 27 21:44 AUTHORS
    -rwxr-xr-x 1 root root   481 Nov 27 21:44 function_getenv.c
    -rwxr-xr-x 1 root root   304 Nov 26 21:56 function_read_line.c
    -rw-r--r-- 1 root root   749 Nov 26 22:03 function_str_concat.c
    -rwxr-xr-x 1 root root   366 Nov 26 22:00 function_strcmp.c
    -rw-r--r-- 1 root root   234 Nov 26 20:19 function_strlen.c
    -rwxr-xr-x 1 root root   614 Nov 26 23:39 function_token.c
    -rwxr-xr-x 1 root root   481 Nov 27 21:44 functions.h
    -rwxr-xr-x 1 root root 28368 Nov 27 21:47 hsh
    -rw-r--r-- 1 root root   661 Nov 26 23:48 l_path.c
    -rw-r--r-- 1 root root  3219 Nov 27 21:47 shell_01.c
    #cisfun$

![N|Solid](https://i.ibb.co/HrbpG8G/Captura.png)
 ## Thanks for reading

## Author
- Daniel Chinome - [Github](https://github.com/danielcinome) / [Twitter](https://twitter.com/DanielChinome)
- Camilo Morales -  [Github](https://github.com/thecamo1509) / [Twitter](https://twitter.com/CamiloAndres_15)
