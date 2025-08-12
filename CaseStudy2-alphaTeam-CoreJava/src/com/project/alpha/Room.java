package com.project.alpha;

import java.util.List;
import java.util.ArrayList;

public class Room {

 String roomType;
 
 List<Switchable> device;

	 public Room() {
		 
	 }
	 public Room(String roomType) {
		  this.roomType = roomType;
		  this.device = new ArrayList();
	 }

	 public String getRoomType() {
		 return roomType;
	 }

	 public void setRoomType(String roomType) {
		 this.roomType = roomType;
	 }

	 public List<Switchable> getDevice() {
		 return device;
	 }

	 public void setDevice(List<Switchable> device) {
		 this.device = device;
	 } 
 
	 public void addDevice(String d)
	 {
		if(d=="TV")
		{
			this.device.add(new TV());
		}
		else if(d=="AC")
		{
			this.device.add(new AC());
		}
		else if(d=="Light")
		{
			this.device.add(new Light());
		}
		else if(d=="Shower")
		{
			this.device.add(new Shower());
		}
		else if(d=="MusicPlayer")
		{
			this.device.add(new MusicPlayer());
		}
	 }
 
	 public int searchDevice(String device) {
		 
		 int i,index=-1;
		 
		 for(i=0;i<this.getDevice().size();i++)
		 {
			if(this.getDevice().get(i)instanceof TV) {
				if(device=="TV")
				{
					index=i;
					break;
				}
			}
			else if(this.getDevice().get(i)instanceof AC) {
				if(device=="AC")
				{
					index=i;
					break;
				}
			}
			else if(this.getDevice().get(i)instanceof Light) {
				if(device=="Light")
				{
					index=i;
					break;
				}
			}
			else if(this.getDevice().get(i)instanceof MusicPlayer) {
				if(device=="MusicPlayer")
				{
					index=i;
					break;
				}
			}
			else if(this.getDevice().get(i)instanceof Shower) {
				if(device=="Shower")
				{
					index=i;
					break;
				}
			}
		 }
		 return index;
	 }
	 public void turnOnDevice(String device) {
		 int index;
		 index=searchDevice(device);
		 if(index!=-1) {
			 this.device.get(index).onAppliance();
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void turnOffDevice(String device) {
		 int index;
		 index=searchDevice(device);
		 if(index!=-1) {
			 this.device.get(index).offAppliance();
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void status(String device) {
		 int index;
		 Boolean status;
		 index=searchDevice(device);
		 if(index!=-1) {
			 if(this.device.get(index).getStatus())
			 {
				 System.out.println("\nDevice is 'ON'\n");
			 }
			 else {
				 System.out.println("\nDevice is 'OFF'\n");
			 }
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void volumeUp(String device) {
		 int index;
		 index=searchDevice(device);
		 if(index!=-1) {
			 if(this.device.get(index)instanceof TV) {
				 TV tv=(TV) this.device.get(index);
				 tv.volumeUp();
			 }
			 else  if(this.device.get(index)instanceof MusicPlayer) {
				 MusicPlayer mp=(MusicPlayer) this.device.get(index);
				 mp.volumeUp();
			 }
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void volumeDown(String device) {
		 int index;
		 index=searchDevice(device);
		 if(index!=-1) {
			 if(this.device.get(index)instanceof TV) {
				 TV tv=(TV) this.device.get(index);
				 tv.voulmeDown();
			 }
			 else  if(this.device.get(index)instanceof MusicPlayer) {
				 MusicPlayer mp=(MusicPlayer) this.device.get(index);
				 mp.voulmeDown();
			 }
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void tempUp(String device) {
		 int index;
		 index=searchDevice(device);
		 if(index!=-1) {
			 if(this.device.get(index)instanceof AC) {
				 AC ac=(AC) this.device.get(index);
				 ac.tempUp();
			 }
			 else  if(this.device.get(index)instanceof Shower) {
				 Shower sh=(Shower) this.device.get(index);
				 sh.tempUp();
			 }
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void tempDown(String device) {
		 int index;
		 index=searchDevice(device);
		 if(index!=-1) {
			 if(this.device.get(index)instanceof AC) {
				 AC ac=(AC) this.device.get(index);
				 ac.tempDown();
			 }
			 else  if(this.device.get(index)instanceof Shower) {
				 Shower sh=(Shower) this.device.get(index);
				 sh.tempDown();
			 }
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void pause(String device) {
		 int index;
		 index=searchDevice(device);
		 if(index!=-1) {
			 if(this.device.get(index)instanceof TV) {
				 TV tv=(TV) this.device.get(index);
				 tv.pause();
			 }
			 else  if(this.device.get(index)instanceof MusicPlayer) {
				 MusicPlayer mp=(MusicPlayer) this.device.get(index);
				 mp.pause();
			 }
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void play(String device) {
		 int index;
		 index=searchDevice(device);
		 if(index!=-1) {
			 if(this.device.get(index)instanceof TV) {
				 TV tv=(TV) this.device.get(index);
				 tv.play();
			 }
			 else  if(this.device.get(index)instanceof MusicPlayer) {
				 MusicPlayer mp=(MusicPlayer) this.device.get(index);
				 mp.play();
			 }
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void standBy(String device) {
		 int index;
		 index=searchDevice(device);
		 if(index!=-1) {
			 if(this.device.get(index)instanceof TV) {
				 TV tv=(TV) this.device.get(index);
				 tv.standBy();
			 }
			 else  if(this.device.get(index)instanceof MusicPlayer) {
				 MusicPlayer mp=(MusicPlayer) this.device.get(index);
				 mp.standBy();
			 }
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 public void checkTime(String device) {
		 int index;
		 Boolean status;
		 index=searchDevice(device);
		 if(index!=-1) {
			 System.out.println("\nTotal Time Device is ON: "+this.device.get(index).getTime());
		 }
		 else
		 {
			 System.out.println("\nDevice not found!\n");
		 }
	 }
	 
	 public void display() {
		 for(int ctr=0;ctr<this.device.size();ctr++) {
			 if(this.getDevice().get(ctr)instanceof TV) {
					System.out.println("TV");
				}
				else if(this.getDevice().get(ctr)instanceof AC) {
					System.out.println("AC");
				}
				else if(this.getDevice().get(ctr)instanceof Light) {
					System.out.println("Light");
				}
				else if(this.getDevice().get(ctr)instanceof MusicPlayer) {
					System.out.println("Music Player");
				}
				else if(this.getDevice().get(ctr)instanceof Shower) {
					System.out.println("Shower");
				}
		 }
	 }
}
