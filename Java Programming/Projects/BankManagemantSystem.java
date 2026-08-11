import java.util.Scanner;
class Account{
    int accountNumber;
    String accountHolderName;
    double balance;
    Account(int accountNumber, String accountHolderName, double balance){
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = balance;
    }
    void deposit(double amount){
        if(amount>0){
            balance += amount;
            System.out.println("Deposit successful. current balance: " + balance);
        } else {
            System.out.println("Deposit failed. Invalid amount.");
        }
        System.out.println("Deposited: " + amount);
    }
    void withdraw(double amount){
        if(amount>0 && amount<=balance){
            balance -= amount;
            System.out.println("Withdrawal successful. current balance: " + balance);
        } else {
            System.out.println("Withdrawal failed. Invalid amount or insufficient balance.");
        }
        System.out.println("Withdrawn: " + amount);
    }
    void checkBalance(){
        System.out.println("Current balance: " + balance);
    }
}
public class BankManagemantSystem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter account number: ");
        int accountNumber = sc.nextInt();
        sc.nextLine(); // Consume newline
        System.out.print("Enter account holder name: ");
        String accountHolderName = sc.nextLine();
        System.out.print("Enter initial balance: ");
        double balance = sc.nextDouble();

        Account account = new Account(accountNumber, accountHolderName, balance);

        while(true){
            System.out.println("\nBank Management System");
            System.out.println("1. Deposit");
            System.out.println("2. Withdraw");
            System.out.println("3. Check Balance");
            System.out.println("4. Exit");
            System.out.print("Choose an option: ");
            int choice = sc.nextInt();

            switch(choice){
                case 1:
                    System.out.print("Enter amount to deposit: ");
                    double depositAmount = sc.nextDouble();
                    account.deposit(depositAmount);
                    break;
                case 2:
                    System.out.print("Enter amount to withdraw: ");
                    double withdrawAmount = sc.nextDouble();
                    account.withdraw(withdrawAmount);
                    break;
                case 3:
                    account.checkBalance();
                    break;
                case 4:
                    System.out.println("Exiting...");
                    return;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}