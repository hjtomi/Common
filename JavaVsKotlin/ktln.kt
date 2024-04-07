fun main()
{
    println("Hello, world!")
    
    var lastName = "Hegymegi - Jakó";
    var firstName = "Tamás";
    var age = 17;
    var height = 167;
    val pi = 3.14159;
    val e = 2.6;
    var isNig = false;
    var knowsToCode = true;
    
   	println(lastName +" "+ firstName);
    println(age.toString() + " " + height.toString());
    println(pi.toString() + " " + e.toString());
    
    println("$isNig and $knowsToCode");
    
   	var both = isNig || knowsToCode;
    println(both);
    
    if (age > 18)
    {
        System.out.println("Ihatsz");
    } else if (age == 18)
    {
        System.out.println("Epphogy ihatsz");
    } else 
    {
        System.out.println("Nem ihatsz");
    }
}