# CPP-Modules-0-4

# important infos : 

In C++, classes are user-defined data types that can contain data members (variables) and member functions (methods). Classes serve as blueprints for creating objects, which are instances of those classes. Here's a breakdown of some key concepts related to classes and methods in C++:

**Methods**: Methods are functions defined within a class. They operate on the data members of the class and can perform various operations. Methods can be declared and defined inside the class definition or outside it. When a method is defined inside a class, it is implicitly inline. Methods can have access to the data members of the class.

**Static Variables in C++**: A static variable declared inside a function retains its value even after the function has exited. It's initialized only once and remains in memory until the program terminates. It has a local scope to the function but a lifetime throughout the program's execution. A static variable declared at the class level (a static member variable) is shared by all instances of the class. It's declared using the static keyword and exists independently of any class object.

Normal Method vs Static Method:

**Normal Method**: A normal method operates on the object's data. It can access non-static data members and can modify the object's state. When called, it's invoked in the context of a specific object instance.
**Static Method**: A static method belongs to the class rather than an object. It doesn't operate on any specific instance's data and doesn't have access to this pointer. It can only access static members (variables or methods) of the class. Static methods can be called using the class name without the need for an object instance.
Public, Private, and Protected Attributes:

**Public**: Public attributes and methods are accessible from outside the class. They can be accessed by any part of the program that can see the class. This allows for straightforward and unrestricted access.
Private: Private attributes and methods are accessible only from within the same class. They cannot be accessed directly from outside the class. This encapsulation helps in hiding the internal implementation details of the class and prevents external interference.
Protected: Protected attributes and methods are similar to private ones but with one key difference: they can be accessed by derived classes. This allows for inheritance-based reuse while still maintaining some level of encapsulation.
Benefits of Access Control:

Encapsulation: Control access to data and methods, allowing for better management of complexity and reducing dependencies.
Data Hiding: Hides implementation details, preventing direct manipulation of internal state by external code.
Inheritance: Allows derived classes to access necessary attributes and methods while keeping them hidden from unrelated classes.
Security: Ensures that sensitive data and critical methods are not easily tampered with by external code.
