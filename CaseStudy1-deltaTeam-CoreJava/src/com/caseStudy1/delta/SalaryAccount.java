package com.caseStudy1.delta;
import java.time.LocalDate;
import java.time.Period;

public class SalaryAccount extends SavingAccount {

	LocalDate lastTransactionDate;
	static double interestRate;
	boolean tranStatus;
	
	public SalaryAccount() {
		
	}
	
	public SalaryAccount(int accNo,String accName,double balance) {
		super(accNo,accName,balance,0);
		this.lastTransactionDate=LocalDate.now();
		tranStatus=true;
	}

	public static double getInterestRate() {
		return interestRate;
	}

	public static void setInterestRate(double interestRate) {
		SalaryAccount.interestRate = interestRate;
	}
	
	public void deposit(double amount) {
		LocalDate depositDate = LocalDate.now();
		Period difference =Period.between(lastTransactionDate, depositDate);
		if(difference.getDays()>60)
		{
			super.deposit(amount);
		}
		else {
			super.deposit(amount);
			this.lastTransactionDate=depositDate;
		}
	}
	
	public void withdraw(double amount) {
		
		LocalDate withdrawDate = LocalDate.now();
		
		checkValidity(withdrawDate);
		
		if(this.tranStatus==true)
		{
			this.balance-=amount;
			this.lastTransactionDate=withdrawDate;
		}
		else
		{
			System.out.println("Your account is frozen");
		}
	}
	
	public double calcInterest() {
		super.display();
		return this.balance+this.balance*SalaryAccount.interestRate;
	}
	
	public void checkValidity(LocalDate withdrawDate) {
		Period difference =Period.between(this.lastTransactionDate, withdrawDate);
		if(difference.getDays()>60)
		{
			this.tranStatus=false;
		}
	}
}
