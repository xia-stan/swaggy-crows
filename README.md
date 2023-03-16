# swaggy-crows
This project provides a simple example of how to implement [Swagger UI](https://github.com/swagger-api/swagger-ui) within [Crow](https://github.com/CrowCpp/Crow).
This example should compile without issue on both Linux and Windows based systems.

# Dependencies
* CMake 3.13+
* A compiler with C++ 17 support
* A webbrowser to view the page

To simplify things, I've added Crow and ASIO as git submodules. This just simplifies the process of getting the 
right set of headers. Not necessarily the best solution but certainly the easiest.
 
# Project structure
I've set this up as a CMake project. You can substitute your framework of choice. I'm mostly focused on the Crow and 
Swagger UI updates needed to get the to working. 

I've set this up using a blueprint for the standard reasons to use blueprints. 
> **Remember! The endpoint paths for blueprints are relative to the execution directory of the program!**

The Swagger UI files are included under `docs/swagger`. I've included their license file with them, as well as a README
detailing what I've changed. We've updated the file names from the generic "index.html" to "swagger.html" to prevent 
collisions. Other than that, you need to make sure that you 
1. point `swagger-initializer.js` to your OpenAPI yaml file and
2. update swagger.html to use the blueprinted paths.

Once those are all updated. Just make sure that you execute the program in the same location that you have the docs 
directory. 

# Running this example
## Cloning the project
Since we use submodules you'll want to make sure you add the `--recurse-submodules` option to your clone command: 
```bash
git clone --recurse-submodules git@github.com:xia-stan/swaggy-crows.git
```
## Generating build scripts
Standard CMake workflow:
```bash
mkdir build && cd build && cmake ../
```
## Compiling, linking, etc.
This will vary based on your platform. On Windows, mine defaulted to Visual Studio x64 environment 
with ninja and compiled using
```bash
cmake.exe --build E:\projects\swaggy-crows\cmake-build-release --target swaggy_crows -j 12
```
## Execution
No magic here, just run the compiled executable on your system. 
> **Warning**: Make sure that you execute swaggy_crows in the same directory as the docs folder!