class User():
    def __init__(self, firstname: str, lastname: str) -> None:
        self.firstname = firstname
        self.lastname = lastname

    def greet(self):
        return f"Good morning {self.firstname} {self.lastname}"


user1 = User("Alex", "Hunter")

# print(user1.firstname)

'''inherits the User class'''
class AdminUser(User):
    def __init__(self, firstname: str, lastname: str) -> None:
        super().__init__(firstname, lastname)
        self.role = "Super Admin"

    def revokeAccess(self):
        return "Super admin revoked your access"
    '''overrides the greet method'''
    def greet(self):
        return f"Good morning {self.firstname} {self.lastname}. Please abide by our community rules"
superAdmin = AdminUser("David", "Beckham")
print(superAdmin.greet())
