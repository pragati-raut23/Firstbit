package com.caseStudy1.delta;

public class SavingAccount extends Account{

	double minBalance;
	static double interestRate;
	
	public SavingAccount(){
		
	}
	
	public SavingAccount(int accNo,String accName,double balance,double minBalance) {
		super(accNo,accName,balance);				
		this.minBalance=minBalance;
	}

	public double getMinBalance() {
		return minBalance;
	}

	public void setMinBalance(double minBalance) {
		this.minBalance = minBalance;
	}

	public static double getInterestRate() {
		return interestRate;
	}

	public static void setInterestRate(double interestRate) {
		SavingAccount.interestRate = interestRate;
	}

	public void withdraw(double amount) throws InsufficientBalanceException {
		
		if(this.balance-amount>this.minBalance) {
			this.balance-=amount;
		}
		else
			System.out.println("\nInsufficient Balance!\n");
	}

	public double calcInterest() {
		super.display();
		return this.balance+this.balance*SavingAccount.interestRate;
	}
	
}
