package com.project.alpha;

import java.util.List;
import java.util.*;
import java.util.ArrayList;

//singletone class
public class House {

	Scanner sc=new Scanner(System.in);
	
	int houseNo;
	String ownerName;
	List<Room> room=new ArrayList<Room>();
	
	private static House house=new House();
	
	private House() {
		
	}

	public static House getHouse() {
		return house;
	}
	
	public int getHouseNo() {
		return houseNo;
	}

	public void setHouseNo(int houseNo) {
		this.houseNo = houseNo;
	}

	public List<Room> getRoom() {
		return room;
	}

	public void setRoom(List<Room> room) {
		this.room = room;
	}
	
	public String getOwnerName() {
		return ownerName;
	}

	public void setOwnerName(String owner) {
		this.ownerName = owner;
	}

	public void addRoom(String room) {
		
		this.room.add(new Room(room));
	}
	
	public int checkRoom(String roomType)
	{
		int i,index=-1;
		for(i=0;i<room.size();i++)
		{
			if(room.get(i).getRoomType().equals(roomType))
			{
				index=i;
				break;
			}
		}
		return index;
	}
	public void addDevice(String roomType) {
		
		int index,choice;
		String device;
		index=checkRoom(roomType);
		if(index!=-1)
		{
			System.out.println("\nEnter your choice\n1.TV\n2.AC\n3.Music Player\n4.Light\n5.Shower\n");
			choice=sc.nextInt();
			switch(choice) {
			case 1:
				room.get(index).addDevice("TV");
				break;
			case 2:
				room.get(index).addDevice("AC");
				break;
			case 3:
				room.get(index).addDevice("MusicPlayer");
				break;
			case 4:
				room.get(index).addDevice("Light");
				break;
			case 5:
				room.get(index).addDevice("Shower");
				break;
			default:
				System.out.println("\nDevice not exist!\n");
			}
			
		}
		else
		{
			System.out.println("\nRoom not found!\n");
		}
	}
	
	public void turnOnDevice(int index,String device) {
		room.get(index).turnOnDevice(device);
	}
	public void turnOffDevice(int index,String device) {
		room.get(index).turnOffDevice(device);
	}
	public void checkStatus(int index,String device) {
		room.get(index).status(device);
	}
	public void volumeUp(int index,String device) {
		
		room.get(index).volumeUp(device);
	}
	public void volumeDown(int index,String device) {
		
		room.get(index).volumeDown(device);
	}
	public void tempUp(int index,String device) {
		
		room.get(index).tempUp(device);
	}
	public void tempDown(int index,String device) {
		
		room.get(index).tempDown(device);
	}
	public void standBy(int index,String device) {
		room.get(index).standBy(device);
	}
	public void checkTime(int index,String device) {
		room.get(index).checkTime(device);
	}
	public int getEntChoice() {
		int choice;
		System.out.println("\nEnter your choice\n1.TV\n2.Music Player");
		choice=sc.nextInt();
		if(choice==1) {
			return 1;
		}
		else if(choice==2) {
			return 2;
		}
		else
		{
			return 0;
		}
	}
	public int getCtrChoice() {
		int choice;
		System.out.println("\nEnter your choice\n1.AC\n2.Shower");
		choice=sc.nextInt();
		if(choice==1) {
			return 1;
		}
		else if(choice==2) {
			return 2;
		}
		else
		{
			return 0;
		}
	}
	
	public void display() {
		System.out.println("\nHouse No: "+this.getHouseNo()+"\tOwner Name: "+this.getOwnerName()+"\n");
		int count=1,i=0;
		for(Room rm : room){
			String r = rm.roomType;
			rm.roomType = count+r;
			count++;
		}
		Iterator<Room> iter=room.iterator();
		
		while(iter.hasNext()) {
			Room r=iter.next();
			System.out.println("Room type: "+r.getRoomType()+"\n");
			System.out.println("Device list:");
			r.display();
			System.out.println("\n");
		}
		/*for(int i=0;i<this.room.size();i++) {
			System.out.println("Room name: "+this.room.get(i).roomType);
			System.out.println("Device List:\n");
			this.room.get(i).display();
		}*/
	}
	public String getDevice() {
		int choice;
		System.out.println("\nEnter device choice\n1.TV\n2.Music player\n3.AC\n4.Light\n5.Shower\n");
		choice=sc.nextInt();
		if(choice==1)
			return "TV";
		else if(choice==2)
			return "MusicPlayer";
		else if(choice==3)
			return "AC";
		else if(choice==4)
			return "Light";
		else if(choice==5)
			return "Shower";
		else
			System.out.println("\ninvalid choice!\n");
			return "notFound";
		}
	
}
