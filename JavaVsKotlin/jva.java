class jva{
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        
        String lastName = "Hegymegi - Jako";
        String firstName = "Tamas";
        int age = 17;
        int height = 167;
        float pi = 3.14159f;
        float e = 2.6f;
        char grade = 'A';
        char grade2 = 'B';
        boolean isNig = false;
        boolean knowsToCode = true;
        
        System.out.println(lastName + " " + firstName);
        System.out.println(age + " " + height);
        System.out.println(pi + " " + e);
        System.out.println(isNig + " " + knowsToCode);
        
        boolean both = isNig || knowsToCode;
        System.out.println(both);
        
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
}