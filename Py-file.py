name1 = "Adham"
age = 19

if age >= 18:

    state = "an adult"
    print("My name is " + name1 + " and I am " + state)

i = 0

for i in range(6):
    print(i)

def greet(name):
    print("Hello", name)

greet("Adham")

students = []

def add_student():
    name = input("Enter student name: ")
    grade = input("Enter student grade: ")

    student = {
        "name": name,
        "grade": grade
    }

    students.append(student)

    print("Student added successfully!")

def show_students():
    if len(students) == 0:
        print("No students found.")
    else:
        for student in students:
            print(f"Name: {student['name']}, Grade: {student['grade']}")

def search_student():
    search_name = input("Enter student name: ")

    found = False

    for student in students:
        if student["name"].lower() == search_name.lower():
            print(f"Name: {student['name']}, Grade: {student['grade']}")
            found = True

    if not found:
        print("Student not found.")

while True:
    print("\n1. Add Student")
    print("2. Show Students")
    print("3. Search Student")
    print("4. Exit")

    choice = input("Choose: ")

    if choice == "1":
        add_student()

    elif choice == "2":
        show_students()

    elif choice == "3":
        search_student()

    elif choice == "4":
        print("Goodbye!")
        break

    else:
        print("Invalid choice.")