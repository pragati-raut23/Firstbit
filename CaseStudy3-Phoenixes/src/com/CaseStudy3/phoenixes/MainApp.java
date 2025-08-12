package com.CaseStudy3.phoenixes;
import java.util.*;
import java.util.Set;
import java.util.HashSet;

public class MainApp {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		
		CoinOperations app=new CoinOperations();
		int choice=-1;
		
		app.addDataBase();
		
		do {
			try {
				System.out.println("\nEnter your choice:\n1.add new coin to collection\n2.display collection\n3.search coin"
						+ "\n4.Arrange coin by current value\n5.update coin info\n6.delete coin from collection\n0.exit\n");
				choice=sc.nextInt();
				if(choice<0 || choice>6) {
					throw new InvalidChoiceException("Incorrect Choice!");
				}
				switch(choice) {
				case 1:
					app.add();
					break;
				case 2:
					app.displayCoin();
					break;
				case 3:
					app.searchCoin();
					break;
				case 4:
					app.sortByCurrentValue();
					break;
				case 5:
					app.updateCoin();
					break;
				case 6:
					app.deleteCoin();
					break;
				case 0:
					app.toDataBase(); 
					System.out.println("Thank You!");
					break;
				}
			}
			catch(InvalidChoiceException e) {
				e.printStackTrace();
			}
			
		}while(choice!=0);
	}

	
}
