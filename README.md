# SHELL PROJECT

![Alt text](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)

A functional shell that works the same as the shell

## Starting

The program was written in programming language C, when compiled it will work as
a shell terminal. To compile we use **``gcc 4.8.4``** with the flags **``-Wall -Werror
-Wextra -pedantic * .c``** and we give an output name to the file **``-o shell``**
when it has been successfully compiled we will be able to execute **``./shell``**
in the terminal. You should see a **``$``** and you can enter your command to use.

## List of allowed functions and system calls for this project.

- **``access``** (man 2 access)
- **``chdir``** (man 2 chdir)
- **``close``** (man 2 close)
- **``closedir``** (man 3 closedir)
- **``execve``** (man 2 execve)
- **``exit``** (man 3 exit)
- **``_exit``** (man 2 _exit)
- **``fflush``** (man 3 fflush)
- **``fork``** (man 2 fork)
- **``free``** (man 3 free)
- **``getcwd``** (man 3 getcwd)
- **``getline``** (man 3 getline)
- **``isatty``** (man 3 isatty)
- **``kill``** (man 2 kill)
- **``malloc``** (man 3 malloc)
- **``open``** (man 2 open)
- **``opendir``** (man 3 opendir)
- **``perror``** (man 3 perror)
- **``read``** (man 2 read)
- **``readdir``** (man 3 readdir)
- **``signal``** (man 2 signal)
- **``stat``** (__xstat) (man 2 stat)
- **``lstat``** (__lxstat) (man 2 lstat)
- **``fstat``** (__fxstat) (man 2 fstat)
- **``strtok``** (man 3 strtok)
- **``wait``** (man 2 wait)
- **``waitpid``** (man 2 waitpid)
- **``wait3``** (man 2 wait3)
- **``wait4``** (man 2 wait4)
- **``write``** (man 2 write)

## Testing

**The shell should work like this in interactive mode:**
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

**But also in non-interactive mode:**
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Shell use

You must first compile the program, then type **``./shell``** to run it;
Once the process is done, you can use the shell as you normally would with the
terminal.

## Contributors
* **Kevin Castro** - [KevinCastroP](https://github.com/KevinCastroP)
* **Jhonatan Legarda** - [steven-cruz](https://github.com/steven-cruz)

## Acknowledgements