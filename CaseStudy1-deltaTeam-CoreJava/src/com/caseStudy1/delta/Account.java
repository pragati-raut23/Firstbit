package com.caseStudy1.delta;

public abstract class Account {

	protected int accNo;
	String AccName;
	double balance;

	public Account() {
		
	}

	public Account(int accNo, String accName, double balance) {
		this.accNo = accNo;
		AccName = accName;
		this.balance = balance;
	}

	public int getAccNo() {
		return accNo;
	}

	public void setAccNo(int accNo) {
		this.accNo = accNo;
	}

	public String getAccName() {
		return AccName;
	}

	public void setAccName(String accName) {
		AccName = accName;
	}

	public double getBalance() {
		return balance;
	}

	public void setBalance(double balance) {
		this.balance = balance;
	}
	
	public void deposit(double amount) {
		this.balance+=amount;
	}
	
	public void display() {
		System.out.println("\nAccount Details:\nAccount No: "+this.accNo+"\tName: "+this.AccName+"\t  Balance: "+this.balance);
	}
	public abstract void withdraw(double amount)throws InsufficientBalanceException;
	public abstract double calcInterest();
}
