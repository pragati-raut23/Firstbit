package com.caseStudy1.delta;
import java.util.*;

public class MainApp {
	
	public static void main(String[] args) {

		
		BankOperations app=new BankOperations();
		Scanner sc=new Scanner(System.in);
		
		SavingAccount.setInterestRate(2.5/100);
		SalaryAccount.setInterestRate(2/100);
		CurrentAccount.setInterestRate(3/100);
		LoanAccount.setInterestRate(3.5/100);
		
		int choice;
		
		// admin log in => daily transaction report
		// loan acc and current acc => if bal is -ve
		// => then we can not close the accounts
		// if money withdrawal get failed
		// that entry should not be added to daily trans. report
		
		do {
			System.out.println("\nEnter Your Choice:\n1. OpenAccount\n2. Close Account\n3. login\n0. to exit\n");
			choice=sc.nextInt();
			switch(choice) {
			case 1:
				app.openAccount();
				break;
			case 2:
				app.closeAccount();
				break;
			case 3:
				app.login();
				break;
			case 0:
				System.out.println("\nThank you!\n");
				break;
			default:
				System.out.println("\nInvalid choice!\n");
			}
		}while(choice!=0);
	}

}