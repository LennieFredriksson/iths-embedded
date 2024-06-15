# _Sample project_

(See the README.md file in the upper level 'examples' directory for more information about examples.)

This is the simplest buildable example. The example is used by command `idf.py create-project`
that copies the project to user specified path and set it's name. For more information follow the [docs page](https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html#start-a-new-project)



## How to use example
We encourage the users to use the example as a template for the new projects.
A recommended way is to follow the instructions on a [docs page](https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html#start-a-new-project).

## Example folder contents

The project **sample_project** contains one source file in C language [main.c](main/main.c). The file is located in folder [main](main).

ESP-IDF projects are built using CMake. The project build configuration is contained in `CMakeLists.txt`
files that provide set of directives and instructions describing the project's source files and targets
(executable, library, or both). 

Below is short explanation of remaining files in the project folder.

```
├── CMakeLists.txt
├── main
│   ├── CMakeLists.txt
│   └── main.c
└── README.md                  This is the file you are currently reading
```
Additionally, the sample project contains Makefile and component.mk files, used for the legacy Make based build system. 
They are not used or needed when building with CMake and idf.py.



Inlämning Uppgift 1:

Jag har använt mig av mjukvaru pulldown enabled (samt pullup disabled) på alla pinnar.

Det finns säkert några funktioner som jag missat... men överlag funkar knappsatsen :)

RUN EXAMPLE:

I (306) main_task: Started on CPU0
I (316) main_task: Calling app_main()
I (2516) MAIN: 1
I (3716) MAIN: 2
I (4516) MAIN: 3
I (5116) MAIN: A
I (6516) MAIN: 5
I (7116) MAIN: 6
I (7916) MAIN: B
I (8916) MAIN: C
I (9516) MAIN: D
I (10716) MAIN: #
I (11716) MAIN: 8
I (12916) MAIN: 9
I (14116) MAIN: 7
I (15116) MAIN: *
I (15716) MAIN: *
I (16316) MAIN: 0






