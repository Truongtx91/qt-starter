# Qt_Starter

A Jenkins build automation example for C++/Qt Desktop application ultilizing CMake, CTest and CPPCheck

## Getting Started 

This is a very basic build setup defined with jenkins declarative pipeline. It's using CMake for the build process
, CTest for executing the tests and CPPCheck for static code analysis

### Prerequisites

- C++11
- [Qt5](https://www.qt.io/) as UI-Framework
- [Catch2](https://github.com/catchorg/Catch2) as Testing-Framework
- [Vcpkg](https://github.com/Microsoft/vcpkg) as Package Manager
- [CPPCheck](http://cppcheck.sourceforge.net/) as Static Code Analyzer
- [Jenkins](https://jenkins.io/) as Build Orchestrator with CMake and CPPCheck plugin
	  
Important to note is that CMake needs the Vcpkg toolchain file to resolve the necessary dependencies
```
-DCMAKE_TOOLCHAIN_FILE={YOUR_PATH_TO_VCPKG}/vcpkg/scripts/buildsystems/vcpkg.cmake
```
