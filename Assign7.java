public class NumberTable {
    public static void main(String[] args) {
        // Check if user has provided command line argument
        if (args.length != 1) {
            System.out.println("Usage: java NumberTable <number>");
            return;
        }

        // Parse the command line argument to get the number
        int number = Integer.parseInt(args[0]);

        // Display the table of the number
        System.out.println("Table of " + number + ":");
        for (int i = 1; i <= 10; i++) {
            System.out.println(number + " x " + i + " = " + (number * i));
        }
    }
}
