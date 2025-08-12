package com.dictionary_V1;
import java.util.*;

public class MainApp {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		
		Dictionary dc=new Dictionary();
		
		String word,meaning;
		int choice;

		do {
			System.out.println("\nEnter your choice:\n1.add word with meaning\n2.add meaning\n3.display dictionary\n4.search word in dictionary\n0.exit\n");
			choice=sc.nextInt();
			switch(choice) {
			case 1:
				System.out.println("Enter word: ");
				sc.nextLine();
				word=sc.nextLine();
				System.out.println("Enter meaning: ");
				meaning=sc.nextLine();
				dc.addWordNdMeaning(word, meaning);
				break;
			case 2:
				System.out.println("Enter word of which meaning you want to add: ");
				sc.nextLine();
				word=sc.next();
				System.out.println("Enter meaning: ");
				sc.nextLine();
				meaning=sc.nextLine();
				dc.addMeaning(word, meaning);
				break;
			case 3:
				dc.display();
				break;
			case 4:
				System.out.println("Enter word to search: ");
				sc.nextLine();
				word=sc.nextLine();
				dc.search(word);
				break;
			case 0:
				System.out.println("Thank You!");
				break;
			default:
				System.out.println("Invalid choice");
			}
		}while(choice!=0);
	}

}
