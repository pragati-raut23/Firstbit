package com.project.alpha;

import java.util.Scanner;

public class HomeOperation {
	
	Scanner scs=new Scanner(System.in);
	int houseNo;
	String roomType,device,ownerName;
	
	House house=House.getHouse();	// singletone class object
	
	public void addHouse() {
		int choice,i;
		
		System.out.println("\nEnter house no: ");
		houseNo=scs.nextInt();
		System.out.println("\nEnter owner name: ");
		ownerName=scs.next();
		house.setHouseNo(houseNo);;
		house.setOwnerName(ownerName);
	}
	
	public void addRoom()
	{
		System.out.println("\nEnter room type: ");
		roomType=scs.next();
		house.addRoom(roomType);
	}
	public void addDevice() {
		int index;
		
		System.out.println("\nEnter room type: ");
		roomType=scs.next();
		
		house.addDevice(roomType);
	}
	
	public void accessDevice() {
		int choice,index,check;
		String device,ch;
		do {
			System.out.println("\nEnter room type: ");
			roomType=scs.next();
			index=house.checkRoom(roomType);
			
			if(index!=-1) {
				do {
				System.out.println("\n1.Turn On device\n2.Turn Off device\n3.Check status\n4.Volume up/down\n5. Temp up/down\n6.Put device on stand by mode\n7.Check Time Period\n0.to exit\n");
				choice=scs.nextInt();
				switch(choice) {
				case 1:
					device=house.getDevice();
					house.turnOnDevice(index,device);
					break;
				case 2:
					device=house.getDevice();
					house.turnOffDevice(index,device);
					break;
				case 3:
					device=house.getDevice();
					house.checkStatus(index,device); 
					break;
				case 4:
					check=house.getEntChoice();
					if(check==1) {
						volumeAccess(index,"TV");
						
					}
					else if(check==2) {
						volumeAccess(index,"MusicPlayer");
					}
					else {
						System.out.println("\nDevice not exist!\n");
					}
					break;
				case 5:
					check=house.getCtrChoice();
					if(check==1) {
						tempAccess(index,"AC");
					}
					else if(check==2) {
						tempAccess(index,"Shower");
					}
					else {
						System.out.println("\nDevice not exist!\n");
					}
					break;
				case 6:
					check=house.getEntChoice();
					if(check==1) {
						house.standBy(index,"TV");
					}
					else if(check==2) {
						house.standBy(index,"MusicPlayer");
					}
					else {
						System.out.println("\nDevice not exist!\n");
					}
					break;
				case 7:
					device=house.getDevice();
					house.checkTime(index, device);
					break;
				case 0:
					break;
				default:
					System.out.println("\nInvalid Choice!\n");
				}
				
				}while(choice!=0);
			}
			else
			{
				System.out.println("\nRoom not found!\n");
			}
			System.out.println("Do you want to came out from the room(yes/no)");
			scs.next();
			ch=scs.next();
		}while(ch=="yes");
	}
	
	public void volumeAccess(int index,String device) {
		int choice;
		do {
			System.out.println("\n1.Volume increase\n2.volume decrease\n0.exit\n");
			choice=scs.nextInt();
			if(choice==1) {
				house.volumeUp(index,device);
			}
			else if(choice==2) {
				house.volumeDown(index, device);
			}
			else if(choice==0){

			}
			else {
				System.out.println("\nInvalid Choice!\n");
			}
		}while(choice!=0);
	}
	
	public void tempAccess(int index,String device) {
		int choice;
		do {
			System.out.println("\n1.Volume increase\n2.volume decrease\n0.exit\n");
			choice=scs.nextInt();
			if(choice==1) {
				house.tempUp(index,device);
			}
			else if(choice==2) {
				house.tempDown(index, device);
			}
			else if(choice==0){

			}
			else {
				System.out.println("\nInvalid Choice!\n");
			}
		}while(choice!=0);
	}
	public void display() {
		house.display();
	}
}
