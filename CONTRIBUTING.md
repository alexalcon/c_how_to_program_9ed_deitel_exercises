# Contributing Guidelines

Thank you for considering contributing to this repository! Your contributions are vital in making this project a valuable resource for anyone studying "C How to Program, 9/e" by Deitel & Deitel. These guidelines will help you understand how to contribute effectively and maintain the organization and quality of the repository.

---

## 📂 File Naming and Versioning

### Adding a Solution to a New Exercise

- If you are adding a solution to an exercise that is not already present in the repository, the file must be named in the following format:
  ```
  exercise_<chapter_number>_<exercise_number>_v1_0_0.c
  ```
  **Example:** For chapter 2, exercise 11, the file should be named:
  ```
  exercise_2_11_v1_0_0.c
  ```

### Updating an Existing Solution

- If you are submitting an updated solution to an existing exercise, use Semantic Versioning (SemVer) for naming:
  ```
  v<MAJOR>.<MINOR>.<PATCH>
  ```

#### Versioning Rules

- **MAJOR Version**:
  - Increment when making backward-incompatible changes.
  - Example: Moving from v1.0.0 to v2.0.0 indicates significant changes that may break compatibility.
- **MINOR Version**:
  - Increment when adding new features or functionality that is backward-compatible.
  - Example: Moving from v1.2.0 to v1.3.0 means added features.
- **PATCH Version**:
  - Increment for small fixes or optimizations that do not change functionality.
  - Example: Moving from v1.2.3 to v1.2.4 means bug fixes or formatting corrections.

#### Example of Updated Solution

If the file `exercise_3_47_v1.0.0.c` is updated to add a new method to solve the problem:

```
exercise_3_47_v1.1.0.c
```

If a bug is fixed in the same solution:

```
exercise_3_47_v1.1.1.c
```

#### Note

For any case, always create a new file for the respective updated solution to an existing exercise, e.g.:

```plaintext
c_how_to_program_9ed_deitel_exercises/
├── ...
├── ch03/
│   ├── ...
│   ├── exercise_3_47_v1.1.1.c
│   ├── exercise_3_47_v1.1.1.c
│   ├── ...
├── ch04/
│   └── ...
└── ...
```
---

## 📜 Code Documentation

Each solution file must include the following header at the top:

```c
/**
 * File: <filename>
 * Author: <Your Name>
 * GitHub: <Your GitHub profile link>
 * ----------------------------------------------------------------------------------
 * Description: <Brief description of the exercise>
 *
 * Additional Challenge: <Optional: List any additional challenges you implemented>
 * ----------------------------------------------------------------------------------
 * Created on: <Date>
 * Last Updated: <Date> (If updating an existing solution)
 */
```

**Example Header:**

```c
/**
 * File: exercise_2_17_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -----------------------------------------------------------------------------------------------
 * Description: (Displaying Values with printf) Write a program that displays the numbers 1 to 4
 *              on the same line. Write the program using the following methods.
 *                  a) Using one printf statement with no conversion specifications.
 *                  b) Using one printf statement with four conversion specifications.
 *                  c) Using four printf statements.
 * -----------------------------------------------------------------------------------------------
 * Created on: 17-11-2023
 */

```

---

## 🛠 How to Submit Contributions

### 1. Fork the Repository

- Create your own copy of the repository by clicking the "Fork" button on GitHub.

### 2. Clone Your Fork

- Clone the repository to your local machine:
  ```bash
  git clone https://github.com/<your-username>/c_how_to_program_9ed_deitel_exercises.git
  ```

### 3. Create a Branch

- Create a new branch for your contribution:
  ```bash
  git checkout -b feature/chapter_<chapter_number>_exercise_<exercise_number>
  ```

### 4. Write Your Code

- Add your solution in the appropriate chapter directory.

### 5. Commit Your Changes

- Use clear and concise commit messages. Follow this format:
  ```
  Added solution for Chapter <chapter_number>, Exercise <exercise_number>
  ```
  **Example:**
  ```
  Added solution for Chapter 2, Exercise 13
  ```

### 6. Push to Your Fork

- Push your changes to your forked repository:
  ```bash
  git push origin feature/chapter_<chapter_number>_exercise_<exercise_number>
  ```

### 7. Submit a Pull Request (PR)

- Create a pull request from your fork to the main repository.
- Provide a clear description of your contribution and include the file name(s) and versioning details.

---

## 📘 Additional Reference
If you are new to Git or want to follow best practices for contributing to open-source projects, refer to the Comprehensive Git Contribution Workflow Guide. You can access the guide [here](./comprehensive_git_contribution_workflow_guide.pdf).

---

## 🚀 Additional Notes

- **Testing:** Ensure that your code compiles and runs correctly before submitting.
- **Code Style:** Follow modern C best practices. Use meaningful variable names and comments.
- **Engage:** Feel free to suggest improvements to the structure or existing solutions.

By contributing, you agree to abide by the repository’s [LICENSE](LICENSE).

Thank you for contributing to this project!

