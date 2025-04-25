# lab06

- Line 1 ➝ Student ID  
- Line 2 ➝ Full Name  
- Line 3 ➝ GPA  
- Line 4+ ➝ Courses (one per line)  
- `#` ➝ Separator between student records

---

## 🧠 How It Works

The program:

1. Opens the `names.txt` file using `ifstream`.
2. Reads each line and organizes data by:
   - ID
   - First and Last Name
   - GPA
   - A list of courses
3. When it encounters a `#`, it prints the collected student info.
4. Clears temporary storage and starts fresh for the next student.

📌 It also checks if the file opens correctly—if not, it will alert the user.

---

## 🛠️ Sample Output

