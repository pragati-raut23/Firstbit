package com.caseStudy1.delta;

public class LoanAccount extends Account {

	double loanAmount,repayAmount;
	static double interestRate;
	
	public LoanAccount() {
		
	}
	
	public LoanAccount(int accNo,String accName,double loanAmount) {
		super(accNo,accName,0);
		this.loanAmount=loanAmount;
		this.repayAmount=0;
		this.balance=this.balance-this.loanAmount*LoanAccount.interestRate;
	}

	public double getLoanAmount() {
		return loanAmount;
	}

	public void setLoanAmount(double loanAmount) {
		this.loanAmount = loanAmount;
	}

	public double getRepayAmount() {
		return repayAmount;
	}

	public void setRepayAmount(double repayAmount) {
		this.repayAmount = repayAmount;
	}

	public static double getInterestRate() {
		return interestRate;
	}

	public static void setInterestRate(double interestRate) {
		LoanAccount.interestRate = interestRate;
	}

	public void deposit(double amount) {
		this.repayAmount=amount;
		this.balance+=amount;
		if(this.balance>0) {
			this.loanAmount=0;
		}
	}
	
	public void withdraw(double amount) {
		System.out.println("\nCan'nt withdraw amount!\n");
		
	}

	public double calcInterest() {
		super.display();
		if(this.balance>0) {
			return this.balance+this.balance*LoanAccount.interestRate;
		}
		else
			return this.balance;
	}
	
}
