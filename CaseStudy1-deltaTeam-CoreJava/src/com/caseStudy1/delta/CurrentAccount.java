package com.caseStudy1.delta;

public class CurrentAccount extends Account {

	double overDraftLimit;
	static double interestRate;
	
	public CurrentAccount(){
		
	}
	
	public CurrentAccount(int accNo,String accName,double balance) {
		super(accNo,accName,balance);
		this.overDraftLimit=30000;
	}

	public double getOverDraftLimit() {
		return overDraftLimit;
	}

	public void setOverDraftLimit(double overDraftLimit) {
		this.overDraftLimit = overDraftLimit;
	}

	public static double getInterestRate() {
		return interestRate;
	}

	public static void setInterestRate(double interestRate) {
		CurrentAccount.interestRate = interestRate;
	}

	public void withdraw(double amount) {
		if(this.balance+this.overDraftLimit>=amount) {
			this.balance-=amount;
		}
		else
			System.out.println("\nInsufficient balance!\n");
	}

	public double calcInterest() {
		super.display();
		return this.balance+this.balance*CurrentAccount.interestRate;
	}

}
