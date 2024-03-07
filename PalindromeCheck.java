import java.util.Scanner;

public class PalindromeCheck {
    public static void main(String[] args) {
        int temp, r, sum = 0, n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number");
        n = sc.nextInt();
        temp = n;

        while (n > 0) {
            r = n % 10;
            sum = sum * 10 + r;
            n = n / 10;
        }
        sc.close(); // Closing the scanner at the end

        if (temp == sum) {
            System.out.println(temp + " is a Palindrome Number");
        } else {
            System.out.println(temp + " is not a Palindrome Number");
        }
    }
}
