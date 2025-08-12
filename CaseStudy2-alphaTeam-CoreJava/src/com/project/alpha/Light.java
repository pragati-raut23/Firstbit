package com.project.alpha;

import java.time.LocalTime;
import java.time.temporal.ChronoUnit;

public class Light implements Switchable {

	Boolean status;
	float time;
	LocalTime onTime;
	LocalTime offTime;

	public Light() {
		this.status=false;
	}
	
	public Boolean getStatus() {
		return status;
	}

	public void setStatus(Boolean status) {
		this.status = status;
	}

	public float getTime() {
		if(onTime!=null&&offTime!=null) {
			this.time=(float) this.onTime.until(this.offTime, ChronoUnit.MINUTES);
			return time;
		}
		return 0;	
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
	
	@Override
	public void onAppliance() {
		if(isOn()) {
			System.out.println("\nDevice is already ON!\n");
		}
		else {
			this.status=true;
			this.onTime=LocalTime.now();
			System.out.println("\nDevice turned On\n");
		}
	}

	@Override
	public void offAppliance() {
		if(isOff()) {
			System.out.println("\nDevice is already OFF!\n");
		}
		else {
			this.status=false;
			this.offTime=LocalTime.now();
			System.out.println("\nDevice turned Off\n");
		}
	}
}
