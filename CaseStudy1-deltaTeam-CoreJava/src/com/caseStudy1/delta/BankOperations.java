package com.caseStudy1.delta;

import java.io.IOException;
import java.time.LocalDate;
import java.util.Scanner;

public class BankOperations {

	int size=10;
	int ctr=0;
	static int accNo=2330;
	Scanner scs=new Scanner(System.in);
	Account[] acc=new Account[size];
	DailyReport[] dr=new DailyReport[20];
	int record=0;
	
	
	public void openAccount() {
		System.out.println("\n---Enter Account Type---\n1.Saving Account\n2.Salary Account\n3.Current Account\n4.Loan Account\n");
		int choice=scs.nextInt();
		switch(choice) {
		case 1:
			createSavingAccount();
			break;
		case 2:
			createSalaryAccount();
			break;
		case 3:
			createCurrentAccount();
			break;
		case 4:
			createLoanAccount();
			break;
		}
	}
	
	void createSavingAccount() {
		String accName;
		double balance,minBalance=0;
		if(ctr<size) {
			System.out.println("\nEnter Account holder's Name: ");
			accName=scs.next();
			System.out.println("\nEnter balance (minimum Rs.10,000): ");
			balance=scs.nextDouble();
			if(balance>=10000) {
				minBalance=10000;
			}
			else {
				System.out.println("\nPlease enter minimum Rs.10000");
				balance=scs.nextDouble();
				if(balance>=10000) {
					minBalance=10000;
				}
			}
			if(minBalance==10000) {
				acc[ctr]=new SavingAccount(++accNo,accName,balance,minBalance);
				ctr++;
				if(record<20) {
					LocalDate date=LocalDate.now();
					dr[record]=new DailyReport(accNo,date,"Account Open",balance);
					record++;
				}
			}
			else
				System.out.println("Insufficient Balance!");
		}
		else
			System.out.println("\nAccount limit over!\n");
	}
	
	void createSalaryAccount() {
		String accName;
		double balance;
		if(ctr<size) {
			System.out.println("\nEnter Account holder's Name: ");
			accName=scs.next();
			System.out.println("\nEnter balance: ");
			balance=scs.nextDouble();
			if(balance>=0) {
				acc[ctr]=new SalaryAccount(++accNo,accName,balance);
				ctr++;
				if(record<20) {
					LocalDate date=LocalDate.now();
					dr[record]=new DailyReport(accNo,date,"Account Open",balance);
					record++;
				}
			}
			else
				System.out.println("Insufficient Balance!");
		}
		else
			System.out.println("\nAccount limit over!\n");
	}
	
	void createCurrentAccount() {
		String accName;
		double balance;
		if(ctr<size) {
			System.out.println("\nEnter Account holder's Name: ");
			accName=scs.next();
			System.out.println("\nEnter balance: ");
			balance=scs.nextDouble();
			if(balance>=0) {
				acc[ctr]=new CurrentAccount(++accNo,accName,balance);
				ctr++;
				if(record<20) {
					LocalDate date=LocalDate.now();
					dr[record]=new DailyReport(accNo,date,"Account Open",balance);
					record++;
				}
			}
			else
				System.out.println("Insufficient Balance!");
		}
		else
			System.out.println("\nAccount limit over!\n");
	}
	
	void createLoanAccount() {
		String accName;
		double loanAmount;
		if(ctr<size) {
			System.out.println("\nEnter Account holder's Name: ");
			accName=scs.next();
			System.out.println("\nEnter Loan Amount: ");
			loanAmount=scs.nextDouble();
				acc[ctr]=new LoanAccount(++accNo,accName,loanAmount);
				ctr++;
				if(record<20) {
					LocalDate date=LocalDate.now();
					dr[record]=new DailyReport(accNo,date,"Account Open",0-loanAmount);
					record++;
				}
		}
		else
			System.out.println("\nAccount limit over!\n");
	}
	
	private  int searchAccount(int accNo) {
		int index,i=-1;
		for(index=0;index<ctr;index++) {
			if(acc[index].getAccNo()==accNo) {
				i=index;
				break;
			}
			else {
				i=-1;
			}
		}
		return i;
	}
	
	public void closeAccount() {
		int accNo;
		
		System.out.println("\nEnter Account number: ");
		accNo=scs.nextInt();
		int index=searchAccount(accNo);
		if(index!=-1) {
			if(acc[index]instanceof LoanAccount) {
				if(acc[index].getBalance()>=0) {
					acc[index].setBalance(0);
					while(index>ctr-1) {
						acc[index]=acc[index+1];
						index++;
					}
					ctr--;
					System.out.println("\nAccount Closed Successfully!\n");
					if(record<20) {
						LocalDate date=LocalDate.now();
						dr[record]=new DailyReport(accNo,date,"Account Oclosed",0);
						record++;
					}
				} 
				else
					System.out.println("\nCan'nt close the account!\nLoan amount is not fully repaid!\n");
			}
			else {
				acc[index].setBalance(0);
			while(index>ctr-1) {
				acc[index]=acc[index+1];
				index++;
			}
			ctr--;
			System.out.println("\nAccount Closed Successfully!\n");
			if(record<20) {
				LocalDate date=LocalDate.now();
				dr[record]=new DailyReport(accNo,date,"Account Oclosed",0);
				record++;
			}
			}
		}
		else
			System.out.println("\nAccount not found!\n");
	}
	
	private void depositAmount(Account acc) throws IOException {
		
			System.out.println("\nEnter Amount:");
			double amount=scs.nextDouble();
			acc.deposit(amount);
			System.out.println("\nDeposited Amount: "+amount+"\t Total balance: "+acc.getBalance()+"\n");
			if(record<20) {
				LocalDate date=LocalDate.now();
				dr[record]=new DailyReport(acc.getAccNo(),date,"Deposit",amount);
				record++;
			}
		}
		
	
	
	private void withdrawAmount(Account acc) {
			System.out.println("\nEnter Amount:");
			double amount=scs.nextDouble();
			try {
				acc.withdraw(amount);
			} catch (InsufficientBalanceException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println("\nWithdraw Amount: "+amount+"\t Total balance: "+acc.getBalance()+"\n");
			if(record<20) {
				LocalDate date=LocalDate.now();
				dr[record]=new DailyReport(acc.getAccNo(),date,"Withdraw",amount);
				record++;
			}
		
	}
	
	private void calculatedInterest(Account acc) {
			System.out.println("Total balance with interest: "+acc.calcInterest()+"\n");
	}
	
	private void checkBalance(Account acc) {
		System.out.println("\nCurrent Balance: "+acc.getBalance()+"\n");
	}
	
	public void showAccountDetails(Account acc) {
		acc.display();
	}
	
	public void dailyReport() {
		if(record>0) {
			System.out.println("\n\n\n\n\t\t\t********* Todays Report ***********\n\n");
			for(int index=0;index<record;index++) {
				dr[index].display();
			}
		}
		else
			System.out.println("\nThere is no entry today!\n");
	}

	public void login()
	{
		int accNo;
		if(ctr>0) {
			System.out.println("\nEnter Account number: ");
			accNo=scs.nextInt();
			int index=searchAccount(accNo);
			if(index==-1) {
				System.out.println("Invalid account no");
				return;
			}

			int choice;
			do {
				System.out.println("1. Deposit money\n2. Wthdraw money"
						+ "\n3. Calculated interest\n4. Check balance\n5. Show Account details\n6. Daily report\n0. to exit\n");
				choice=scs.nextInt();
				switch(choice) {		
				case 1:
					try {
						depositAmount(acc[index]);
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					break;
				case 2:
					withdrawAmount(acc[index]);
					break; 
				case 3:
					calculatedInterest(acc[index]);
					break;
				case 4:
					checkBalance(acc[index]);
					break;
				case 5:
					showAccountDetails(acc[index]);
					break;
				case 6:
					dailyReport();
					break;
				}
			}while(choice!=0);
		}
		else
			System.out.println("\nThere is no Account\n"); 
	}
}
