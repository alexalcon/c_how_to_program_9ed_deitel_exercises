# C How to Program, 9/e – Deitel & Deitel – Selected Exercises

[![C11](https://img.shields.io/badge/C-11-blue.svg)](https://en.cppreference.com/w/c/language/history#C11)
[![C17](https://img.shields.io/badge/C-17-blue.svg)](https://en.cppreference.com/w/c/language/history#C17)

This repository contains selected solutions to exercises from [**_C How to Program, 9/e_**](https://deitel.com/c-how-to-program-9-e/) by Deitel & Deitel. The goal of this repository is to provide well-organized, clear, and instructive solutions to help anyone studying the book’s concepts. While not exhaustive, the exercises included here are chosen based on their educational value and complexity. If there’s an exercise you feel should be included, or if you have an alternative solution to an existing one, your contributions are welcome! For details on how to contribute new exercises or improve current solutions, please see the [Contributing Guidelines](CONTRIBUTING.md).

By exploring these solutions, you’ll gain insights into fundamental C programming concepts, best practices, and techniques that influence software engineering principles. For a more comprehensive understanding of the underlying philosophy and applications of C, consider reading the textbook’s preface in its entirety.

## ⚙️ Setting Up the Development Environment

The following guidelines are based on information provided in the textbook, as well as official documentation sources. For more detailed and clear information, readers are encouraged to refer to the following sections of the book:

- **Before You Begin**: Provides foundational details and preparation steps for working with the book and setting up the environment.
- **Section 1.10: Test-Driving a C Application in Windows, Linux and macOS**: Offers practical guidance for compiling and running programs using:
  - **1.10.1 Compiling and Running a C application with Visual Studio 2019 Community Edition on Windows 10**
  - **1.10.3 Compiling and Running a C application with GNU gcc on Linux**

These sections provide comprehensive instructions and examples to better understand the setup and execution process for C development.

### 1. Installing a Compiler

**Windows**  

- **Recommended Approach:** Follow the official Visual Studio Code documentation for C development. This method ensures a smooth setup and access to recent compiler features.  
   - See the [VS Code C Development Documentation](https://code.visualstudio.com/docs/languages/cpp) for instructions on installing and configuring the Microsoft C++ (MSVC) toolchain or MinGW-w64 (recommended).
   - Once configured, you can compile and run the exercises directly within VS Code’s integrated terminal, or use any shell terminal of your preference.

- **Alternative Approach:** If you prefer a setup described in the Deitel & Deitel reference, you can install:
   - [Microsoft Visual Studio Community Edition](https://visualstudio.microsoft.com/vs/community/) with C support.

**Linux**  

On Linux, C compiler availability and features vary depending on the distribution’s package repositories. Modern features of C (C17/18 and beyond) may not be fully available in older compiler versions shipped with certain distributions. Rather than relying on potentially outdated system packages, it’s often more convenient to use a Docker container that provides the latest stable GCC (GNU Compiler Collection) toolchain.

- **Docker with GCC:**  
  1. Install Docker according to your distribution’s instructions.  
     - [Install Docker Engine](https://docs.docker.com/engine/install/)
       
  2. Pull the latest GCC Docker container:  
     ```bash
     docker pull gcc:latest
     ```
     You only need to run `docker pull gcc:latest` once on your system. After pulling the image, Docker caches it locally. You can then start containers from that image as many times as you need, without pulling it again. If you want to update to a newer version of the image in the future, simply re-run docker `docker pull gcc:latest` to download the latest changes.

  3. Run the container, mounting your local exercises directory (this repository) so you can compile and execute the code inside the container:
     ```bash
     docker run --rm -it -v "$(pwd)":/usr/src gcc:latest
     ```
  4. Once inside the container, navigate to a chapter exercises directory (e.g., `cd /usr/src/ch02/`) and compile as needed:
     ```bash
     gcc -std=c18 ./exercise_2_17_v1_0_0.c -o exercise_2_17_v1_0_0 
     ```
     
  These Docker-based instructions follow the recommendations and examples provided in the Deitel & Deitel text, ensuring access to an up-to-date compiler environment that supports C11/C18 standards.

### 2. Compiling and Running the Exercises

Once installed the right compiler, navigate to the directory containing the exercise file, then compile and run the code on a shell terminal:

For compiling:
```bash
gcc -std=c18 ./exercise_2_17_v1_0_0.c -o exercise_2_17_v1_0_0
```

For executing the code:
```bash
./exercise_2_17_v1_0_0
```

## 📝 Contents

Each chapter from the Deitel & Deitel book is represented by a dedicated directory, such as `ch02/`, `ch03/`, etc. Within each chapter directory, you will find:
  - Individual `.c` files for each exercise solved.
  - A local `README.md` (where applicable) providing a brief overview of the exercises, key concepts demonstrated, and build instructions if the chapter’s exercises grow more complex.

**Repository Structure:**
```plaintext
c_how_to_program_9ed_deitel_exercises/
├── ch02/
│   ├── exercise_2_17_v1_0_0.c
│   ├── exercise_2_18_v1_0_0.c
│   ├── ...
├── ch03/
│   ├── exercise_3_12_v1_0_0.c
│   ├── exercise_3_21_v1_0_0.c
│   └── ...
└── ...
└── code_examples/
│   ├── ...
└── vscode_ws/
│   ├── c_how_to_program_9ed_deitel_exercises.code-workspace
├── .gitignore
├── .gitmodules
├── comprehensive_git_contribution_workflow_guide.pdf
├── CONTRIBUTING.md
├── LICENSE
├── README.md
```

The `code_examples/` directory contains [official code examples](https://github.com/pdeitel/CHowToProgram9e) provided in the book. These examples showcase essential concepts and implementations discussed in the book chapters. By studying these examples, you can gain deeper insights into the techniques and practices covered in the text.

## 📝 Site Notes

### ✰ Special Exercise Descriptions
Some exercise descriptions feature a ✰ symbol, indicating that the exercise presents an **interesting and somewhat challenging problem** to tackle. Here’s an example:

```c
/**
 * File: exercise_3_44_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Sides of a Right Triangle) Write a program that reads three nonzero integers and
 *                 determines and prints whether they could be the sides of a right triangle.
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */
```

## 🤝 Contributions

Contributions are welcome! If you have a better way to solve an exercise, found a mistake, or want to add a new exercise, check out the [Contributing Guidelines](CONTRIBUTING.md) for details on how to contribute to this repository.

---

This repository is an independent project and is not affiliated with Deitel & Deitel. It exists to assist learners in mastering C programming concepts through practical exercises and solutions.