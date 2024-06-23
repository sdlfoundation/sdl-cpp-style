# Official SDL Foundation C/C++ Style Guide

This style guide was created to ensure that C/C++ projects by the SDL Foundation follow a similar style.

## Table of contents

 - [clang-format](#clang-format)
 - [Sample](#sample)
 - [Project Structure](#project)
 - [Coding Conventions](#coding)

## Sample

A sample project has been provided in the [Sample](Sample) directory to preview the style.

## clang-format

A clang-format configuration is provided in this repository for use in SDL Foundation repositories.

## Project Structure

SDL Foundation C/C++ repositories use `PascalCase` for file names and directories. Furthermore, all source files are typically in the `Source` directory and all dependencies are in the `Dependencies` directory, dependencies being the only exception to the `PascalCase` convention.

Exceptions for these conventions are typically made for our decompilation projects.

## Coding Conventions

### Variables

- Local variables use `camelCase`.
- Constant globals use `SCREAMING_SNAKE_CASE`.

### Struct Members

Struct members have the same naming convention as local variables.

Class members (or fields) DONT use the `m` prefixes or any other member naming convention and instead rely on language constructs, such as the `this` keyword.

### Enums

Enum names and enum variants use `PascalCase`.

### Structs / Classes

Struct names use `PascalCase`.

### Functions & Methods

Functions and methods use `camelCase`.
