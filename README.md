# VSCode-Docker-Cpp

Building and debugging C++ applications in a Docker container using Visual Studio Code.

## Edit 5/11/2019: Use the Visual Studio Code Remote - Containers extension

When I originally created this repository, this was a good solution to the problem I had to solve. However, I think there's a better solution available now: the [**Visual Studio Code Remote - Containers** extension](https://code.visualstudio.com/docs/remote/containers).  
I'd highly recommend using that approach for new projects.

## Installation

Install [Docker](https://www.docker.com) and [Visual Studio Code](https://code.visualstudio.com), 
as well as the [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) 
and [Docker](https://marketplace.visualstudio.com/items?itemName=PeterJausovec.vscode-docker) extensions.

Then clone this repository (`git clone https://github.com/tttapa/VSCode-Docker-Cpp.git`), and open it in VSCode.

The first step is to build the Docker image: Press `CTRL+P`, type `task build docker image` and hit enter.  
Then run the image in a container with `task start docker container`. You only have to do this the first time, 
from now on, it will start automatically when you open VSCode (make sure to allow the task to run when prompted).

## Building and running the application and tests

The first step is to run [CMake](https://cmake.org) in the container: `task run cmake docker`. 
This will generate the makefiles needed to compile the code.  
When CMake is finished, you can run [Make](https://www.gnu.org/software/make) to compile everything: `task build all docker`. 
You can also use the `CTRL+SHIFT+B` shortcut to build.  
Finally you can run the application: `task run application docker`.

To run the tests, use `task run tests docker`.  
I'd recommend adding a shortcut for running the tests. I used `CTRL+SHIFT+COMMA`. You can add the shortcut by 
pressing `CTRL+K, CTRL+S` to open the Keyboard Shortcuts settings, and search for `Tasks: Run Test Task`.

If you have the necessary tools installed (GCC, Make, CMake, Google Test, etc.) and if you are using a UNIX-like 
operating system, you can also build and run the application and tests locally, without using Docker.  
There are configured tasks available for this setup as well.

## Debugging

It is possible to run the application in the Docker container while using the VSCode debugger frontend. 
Just go to the debug menu (`CTRL+SHIFT+D`), select the configuration `Launch C++ Docker Debug`, and press `F5`.  
This will start the GDB server in the Docker container, and connects VSCode to it.

If you're on a UNIX-like operating system, you can also debug the application locally by selecting the 
`Launch C++ Local Debug` configuration.

## Known limitations

- When debugging an application in the Docker container, you don't have access to its standard in and outputs. 
  You can still inspect the variables and step through the program, etc.
- Debugging in Windows is not possible: getting GCC to work on Windows is hard, and the VSCode debugger on Windows
  doesn't seem to be able to connect to a remote GDB server.
  
If you have a solution to any of these problems, please open an issue, and let me know!
