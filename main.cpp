class Employee:
    def __init__(self, name, position):
        self.name = name
        self.position = position

class Company:
    def __init__(self):
        self.employees = []

    def add_employee(self, employee):
        self.employees.append(employee)

    def total_employees(self):
        return len(self.employees)

    def display_employees(self):
        for employee in self.employees:
            print(f"Name: {employee.name}, Position: {employee.position}")

# Contoh penggunaan
company = Company()

# Menambahkan karyawan
company.add_employee(Employee("Alice", "Manager"))
company.add_employee(Employee("Bob", "Developer"))
company.add_employee(Employee("Charlie", "Designer"))

# Menampilkan jumlah total karyawan
print(f"Total number of employees: {company.total_employees()}")

# Menampilkan daftar karyawan
company.display_employees()