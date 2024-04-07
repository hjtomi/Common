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

public class HelloWorld
{
    public static void Main(string[] args)
    {
        int osszeg = 0;
        for(int i = 0; i < 5; i++)
        {
            Console.WriteLine("Adj meg egy szamot");
			if(i<3)
			{
            	osszeg += Convert.ToInt32(Console.ReadLine());
			} else {
				osszeg -= Convert.ToInt32(Console.ReadLine());
			}
		}
        Console.WriteLine("Az ertek: "+osszeg);
        Console.ReadKey();
    }
}