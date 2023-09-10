/*
A class can contain declarations of the following members:

Constructors
Constants
Fields
Finalizers
Methods
Properties
Indexers
Operators
Events
Delegates
Classes
Interfaces
Structure types
Enumeration types
*/

using System;

namespace Program
{
    public class Program
    {
        static void Main()
        {
            Console.WriteLine("hello");
            var p1 = new Person("johnny", 51);
            p1.greeting();
        }
    }

    public class Person
    {
        public string name;
        public int age;

        // Method with the same name as the class is a constructor
        public Person(string name, int age)
        {
            this.name = name;
            this.age = age;
        }

        public void greeting()
        {
            Console.WriteLine($"Hello I am {this.name}, {this.age}");
        }
    }
}