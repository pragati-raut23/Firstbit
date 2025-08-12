package com.project.alpha;
import java.util.*;
import java.util.List;
import java.util.ArrayList;

public class MainApp {
	
	public static void main(String[] args) {
	
		System.out.println("WELCOME TO AUTOMATED HOUSE SYSTEM !\n");
		HomeOperation app=new HomeOperation();
		
		Scanner sc=new Scanner(System.in);
		int choice;
		
		app.addHouse();
		
		do {
			System.out.println("\nPlease enter your choice:\n\n1.Add room\n2.Add device\n3.Access device\n4.display\n0.exit\n");
			choice=sc.nextInt();
			
			switch(choice) {
			case 1:
				app.addRoom();
				break;
			case 2:
				app.addDevice();
				break;
			case 3:
				app.accessDevice();
				break;
			case 4:
				app.display();
				break;
			default:
				System.out.println("\nInvalid choice!\n");
			}
			
		}while(choice!=0);
	}	
}
