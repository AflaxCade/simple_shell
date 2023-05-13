# Simple Shell Project

This project is a simple UNIX command-line interpreter, commonly known as a shell. It was developed as part of the Alx Africa software engineering program.

The shell is a program that takes commands from the keyboard and gives them to the operating system to perform. In essence, it acts as a middleman between the user and the operating system.

## Getting Started

To get started with this shell, follow these steps:

1. Clone the repository to your local machine using the following command:

```git
git clone https://github.com/AflaxCade/simple_shell.git
```

2. Compile the program using the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

3. Run the shell using the following command:

```
./hsh
```

You should now see a prompt that looks like this:

$

This means that the shell is ready to accept commands.

## Features

This shell supports the following features:

- Built-in commands: cd, env, exit
- Execution of commands from the PATH environment variable
- Handling of command line arguments
- Signal handling for Ctrl+C

## Usage

This shell supports the following built-in commands:

- cd: Changes the current working directory. Usage: cd <directory>
- env: Prints the current environment. Usage: env
- exit: Exits the shell. Usage: exit

To execute a command, simply type it into the shell prompt and press enter. For example:

```
$ ls -l
```

This will execute the ls command with the -l option.

## Contributors

This shell was developed by the following Alx Africa students:

ABDULLAHI HERSI aflah.cade@gmail.com
Karim Awudulai karimawudulai@gmail.com
