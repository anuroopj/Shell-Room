# Shell-Room

Shell-Room(shRoom) is a simple command-line shell written in C. It allows users to enter commands, execute programs, and interact with the operating system through a custom prompt.

## Features

* Displays a custom shell prompt
* Reads user input from the command line
* Executes basic Linux commands
* Supports command arguments
* Handles invalid commands
* Exits the shell using the `exit` command

## Technologies Used

* C
* Linux/Unix system calls
* GCC compiler

## How to Compile

```bash
gcc shRoom.c -o shRoom
```

## How to Run

```bash
./shRoom
```

## Example Usage

```bash
shRoom> ls
shRoom> pwd
shRoom> echo Hello
shRoom> exit
```

## Project Structure

```bash
.
├── shRoom.c
└── README.md
```

## What I Learned

Through this project, I learned how a basic shell works, including reading user input, parsing commands, creating child processes, and executing commands using system calls.

## Future Improvements

* Add support for pipes
* Add input/output redirection
* Add command history
* Add background process support using `&`

## Author

Anuroop Jayan
