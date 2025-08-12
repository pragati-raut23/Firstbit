package com.project.alpha;

import java.time.LocalTime;
import java.time.temporal.ChronoUnit;
import java.util.Scanner;

public class MusicPlayer implements Entertainment {
	 Boolean st;
	 int volume;
	 Boolean status;
	 float time;
	 LocalTime onTime;
	 LocalTime offTime;

	Scanner sc=new Scanner(System.in);
	
	public MusicPlayer() {
		this.status=false;
		this.volume=0;
		this.st=false;
	}
	  public Boolean getSt() {
		return st;
	}

	public void setSt(Boolean st) {
		this.st = st;
	}

	public int getVolume() {
		return volume;
	}

	public void setVolume(int volume) {
		this.volume = volume;
	}

	public Boolean getStatus() {
		return status;
	}

	public void setStatus(Boolean status) {
		this.status = status;
	}

	public float getTime() {
		this.time=(float) this.onTime.until(this.offTime, ChronoUnit.MINUTES);
		return time;
	}

	public void setTime(int time) {
		this.time = time;
	}
	
	public Boolean isOn() {
		if(this.status==true) {
			return true;
		}
		else {
			return false;
		}
	}
	
	public Boolean isOff() {
		if(this.status==false) {
			return true;
		}
		else {
			return false;
		}
	}
	
	public Boolean isStandBy() {
	   if(st==true)
	   {
		   return true;
	   }
	   else
	   {
		   return false;
	   }
	}
	  
	public void standBy(){
	  if(isStandBy()==true)
	  {
		  System.out.println("System is already on standby mode");
	  }
	  else if(isStandBy()==false)
	  {
		   System.out.println("\nDo you want to put device on standby\n1.Yes\n2.No");
		   int choice=sc.nextInt();
		   if(choice==1)
		   {
			   this.st=true;
		   }
		   else 
		   {
			   this.st=false;
		   }
	   }
	}
	 
	@Override
	public void onAppliance() {
		if(isOn()) {
			System.out.println("\nDevice is already ON!\n");
		}
		else {
			this.status=true;
			this.st=false;
			this.onTime=LocalTime.now();
			System.out.println("\nDevice turned On\n");
		}
	}
	
	@Override
	public void offAppliance() {
		if(isOff()) {
			System.out.println("\nDevice is already ON!\n");
		}
		else {
			this.status=false;
			this.st=false;
			this.offTime=LocalTime.now();
			System.out.println("\nDevice turned Off\n");
		}
	}
	
	@Override
	public void play() {
	System.out.println("\nAudio/Video playing...\n");
		
	}
	
	@Override
	public void pause() {
		System.out.println("\nAudio/Video pause...\n");
		
	}
	
	@Override
	public void volumeUp() {
		this.setVolume(this.getVolume()+1);
		System.out.println("\nVolume: "+this.getVolume()+"\n");
		
	}
	
	@Override
	public void voulmeDown() {
		if(this.volume!=0) {
			this.setVolume(this.getVolume()-1);
			System.out.println("\nVolume: "+this.getVolume()+"\n");
		}
		else {
			System.out.println("\nVolume: "+this.getVolume()+"\n");
		}
	}

}
