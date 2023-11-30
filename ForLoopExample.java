// ForLoopExample.java

public class ForLoopExample {
    public static void main(String[] args) {
        // Example 1: Simple for loop to print numbers from 1 to 5
        System.out.println("Example 1:");
        for (int i = 1; i <= 5; i++) {
            System.out.println(i);
        }

        // Example 2: For loop to print even numbers from 2 to 10
        System.out.println("\nExample 2:");
        for (int i = 2; i <= 10; i += 2) {
            System.out.println(i);
        }

        // Example 3: Nested for loop to create a multiplication table
        System.out.println("\nExample 3: Multiplication Table");
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) {
                System.out.print(i * j + "\t");
            }
            System.out.println();
        }
    }
}
