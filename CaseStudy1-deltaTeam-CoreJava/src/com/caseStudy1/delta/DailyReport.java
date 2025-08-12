package com.caseStudy1.delta;
import java.time.LocalDate;

public class DailyReport {

	int accNo;
	String operationName;
	double amount;
	LocalDate date;
	
	public DailyReport() {
		
	}
	
	public DailyReport(int accNo,LocalDate date,String operationName,double amount) {
		this.accNo=accNo;
		this.operationName=operationName;
		this.amount=amount;
		this.date=date;
	}
	
	public void display() {
		System.out.println("\nAccount Number: "+this.accNo+"\t Date: "+this.date+"\tOperation performed: "+this.operationName+"\t  Amount: "+this.amount+"\n");
	}
}
